#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  ll u=1000000007;
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    int k;
    cin>>k;
    ll a[n];
    in(a,n)
    ll sum =0;
    ll sum_safe=0;
    ll s=0;
    bool fp=false;
    rp(n)
    {
        s+=a[i];
        if( fp==0 && a[i]<=0)continue;
        else if( fp==0 && a[i]>0)
        {
            sum_safe=a[i];
            sum=a[i];
            fp=true;
        }
        else
        {
            sum+=a[i];
            if(sum<=0)sum=0;
            sum_safe=max(sum_safe,sum);
        }
    }
    if(sum_safe==0)
    {
        while(s<0)
        {
            s+=u;
        }
        cout<<s<<endl;
    }
    else
    {
        ll d=sum_safe;
        rp(k)
        {
            sum_safe*=2;
            sum_safe%=u;
        }
        s=sum_safe-d+s;
        while(s<0)
        {
            s+=u;
        }
        cout<<s<<endl;
    }
  }
  return 0;
}