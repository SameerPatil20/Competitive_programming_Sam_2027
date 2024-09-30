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
int n;
vector<ll> at;
vector<ll> on;
vector<ll> off;
vector<ll> offitude;
vector<vector<int>> g;
void dfs(int v,int p)
{
    ll on1=0;
    ll off1=at[v];
    for(int u:g[v])
    {
        if(u!=p)
        {
            dfs(u,v);
            on1+=off[u];
            off1+=min(off[u]+min(at[u],at[v]),on[u]);
        }
    }
    on[v]=on1;
    off[v]=off1;
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    cin>>n;
    at.clear();
    g.clear();
    g.resize(n+1);
    on.assign(n+1,-1);
    offitude.assign(n+1,0);
    off.assign(n+1,-1);
    at.push_back(0);
    ll sum=0;
    rp(n)
    {
        ll x;
        cin>>x;
        sum+=x;
        at.push_back(x);
    }
    rp(n-1)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0);
    cout<<sum+min(on[1],off[1])<<endl;
  }
  return 0;
}