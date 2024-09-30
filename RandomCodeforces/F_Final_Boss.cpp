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
ll n,h;
ll a[200100];
ll b[200100];
using namespace std;
bool check(ll t)
{
    ll health=h;
    rp(n)
    {
        health-=a[i]*ceil(1.0*t/b[i]);
    }
        return health<=0;
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    cin>>h>>n;
    ain(a,n)
    ain(b,n)
    ll start=1;
    ll ans=1e18;
    while(start<ans)
    {
        ll mid=(start+ans)>>1;
        if(check(mid))ans=mid;
        else{
            start=mid+1;
        }
    }
    cout<<ans<<endl;
  }
  return 0;
}