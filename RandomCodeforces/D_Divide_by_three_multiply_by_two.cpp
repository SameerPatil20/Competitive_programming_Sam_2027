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
  ll n;
  cin>>n;
  vector<pair<pair<ll,ll>,ll>> a;
  rp(n)
  {
    ll x;
    cin>>x;
    ll y=x;
    ll tw=0;
    while(x%2==0)
    {
        x>>=1;
        tw++;
    }
    ll th=0;
    while(x%3==0)
    {
        x/=3;
        th++;
    }
    a.push_back({{-th,tw},y});
  }
  sort(a.begin(),a.end());
  rp(n)
  {
    cout<<a[i].second<<" ";
  }
  return 0;
}