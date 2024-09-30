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
#define remax(maxo,new) maxo=max(maxo,new);
#define endl '\n'
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ain(a,n)
    sort(a,a+n);
    ll ans=-1;
    rp(n-1)
    {
        if(k>=(i+1)*(a[i+1]-a[i]))
        {
            k-=(a[i+1]-a[i])*(i+1);
        }
        else{
            ans=(a[i]+k/(i+1))*(n)+(n-i-1)+k%(i+1);
            break;
        }
        
    }
    // cout<<ans<<endl;
    if(ans!=-1)cout<<ans+1-n<<endl;
    else{
        cout<<a[n-1]*(n)+k+1-n<<endl;
    }
  }
  return 0;
}