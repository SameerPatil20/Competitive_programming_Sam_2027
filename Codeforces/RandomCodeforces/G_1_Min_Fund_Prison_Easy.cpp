#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define endl '\n'
using namespace std;
ll ans=0;
ll n;
vector<vector<ll>> g;
ll dfs(ll v,ll p)
{
    ll x=1;
    for(ll u:g[v])
    {
        if(u!=p)
        {
            x+=dfs(u,v);
        }
    }
    ans=min(ans,1LL*x*x+1LL*(n-x)*(n-x));
    return x;
}
int main() {
  ll TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    g.clear();
    ll m,c;
    cin>>n>>m>>c;
    g.resize(n+1);
    rp(m)
    {
        ll u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ans=n*n;
    dfs(1,0);
    cout<<ans<<endl;

  }
  return 0;
}