#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define endl '\n'
using namespace std;
vector<vector<ll>> g;
vector<ll> val;
ll n;
ll ans;
vector<ll> order;
ll y=1;
vector<bool> visited;
ll counter;
ll dfs(ll v,ll p)
{
    // cout<<v<<endl;
    order[v] = y++;
    ll yo=0;
    visited[v] = true;
    for(ll u:g[v])
    {
        if(u==p)continue;
        // counter=0;
        if(visited[u])
        {
            // if(order[u]<order[v])counter=0;
            if(order[yo]>order[u])
            {
                yo=u;
            }
        }
        if(!visited[u])
        {
            ll t=dfs(u,v);
            val[v]+=val[u];
            if(order[t]<order[yo])
            {
                yo=t;
            }
        }
    }
    if(v==yo)yo=0;
    // counter++;
    // cout<<v<<" "<<yo<<" "<<val[v]<<endl;
    if(yo==0)
    {
        ans=max(ans,val[v]*(n-val[v]));
        return 0;
    }
    else 
    {
        return yo;
    }
}
int main() {
  ll TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll m;
    cin>>n>>m;
    g.clear();
    g.resize(n+1);
    rp(m)
    {
        ll u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    visited.assign(n+1,0);
    order.assign(n+1,0);
    val.assign(n+1,1);
    ans=0;
    y=1;
    counter=0;
    order[0]=INT_MAX;
    dfs(1,0);
    cout<<(n*(n-1))/2-ans<<endl;

  }
  return 0;
}