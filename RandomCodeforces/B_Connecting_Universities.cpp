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
ll n,k;
map<int,bool> mp;
vector<vector<int>> g;
vector<bool> vis;
ll c;
int dfs(int i)
{
    ll temp=mp[i];
    vis[i]=1;
    for(int v: g[i])
    {
        if(!vis[v])
        {
            temp+=dfs(v);
        }
    }
    c+=min(temp,2*k-temp);
    return temp;
}
int main() {
  cin>>n>>k;
  rp(2*k)
  {
    int x;
    cin>>x;
    mp[x] = true;
  }
  g.resize(n+1);
  vis.assign(n+1,0);
  rp(n-1)
  {
    int u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  c=0;
  dfs(1);
  cout<<c<<endl;


  return 0;
}