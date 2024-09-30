#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define v1(type,x) type x;cin>>x;
#define v2(type,x,y) type x,y;cin>>x>>y;
#define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll l,n;
    cin>>l>>n;
    if(l==2)
    {
        cout<<0<<endl;
        continue;
    }
    ll sum=0;
    ll ncr=1;
    for(ll x=n*3;x<=l;x++)
    {
        ll t=n;
        ll alpha=ncr;
        ll a=x-n*3;
        while(a>=0 )
        {
            cout<<ncr<<endl;
            sum+=ncr*2;
            sum=sum%998244353;
            t++;
            ncr=(ncr/(t-n))*(t-1);
            
            if(a-2>=0)
            ncr=((ncr/(a+n-2))/(a+n-1))*(a)*(a-1);
            a=a-2;
        }
        ncr=(alpha/(x+1-n*3))*(x-n*2);
    }
    cout<<sum<<endl;
  }
  return 0;
}