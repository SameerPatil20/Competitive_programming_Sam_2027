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
    ll n;
    cin>>n;
    pair<ll,ll> cen[n];
    rp(n)
    {
        cin>>cen[i].first>>cen[i].second;
    }
    pair<ll,ll> start,end;
    cin>>start.first>>start.second>>end.first>>end.second;
    ll cutoff=(end.first-start.first)*(end.first-start.first)+(end.second-start.second)*(end.second-start.second);
    bool check=1;
    rp(n)
    {
        if(cutoff>=(end.first-cen[i].first)*(end.first-cen[i].first)+(end.second-cen[i].second)*(end.second-cen[i].second))
        {
            check=0;
            break;
        }
    }
    if(check)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
  return 0;
}