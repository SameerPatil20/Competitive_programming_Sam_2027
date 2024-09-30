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
vector<vector<int>> g;
vector<int> depth;
bool dfs(int s)
{
    bool go=0;
    if(depth[s]%2)go=1;
    for(int v: g[s])
    {
        if(depth[v]==-1)
        {
            depth[v]=depth[s]+1;
            if(depth[s]%2==0)go|=dfs(v);
            else go&=dfs(v);
        }
    }
    return go;
}
int main() {
  int n,t;
  cin>>n>>t;
  g.resize(n+1);
  depth.assign(n+1,-1);
  rp(n-1)
  {
    int u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  int start;
  cin>>start;
  depth[start]=0;
  bool ans=dfs(start);
  if(ans)cout<<"Ron"<<endl;
  else cout<<"Hermione"<<endl;
  return 0;
}