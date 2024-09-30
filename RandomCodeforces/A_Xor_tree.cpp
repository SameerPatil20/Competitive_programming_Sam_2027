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
int a[100001];
int b[100001];
vector<vector<int>> g;
vector<int> flip;
void dfs(int u, int p,int par) {
    cout<<u<<" "<<p<<" "<<par<<endl;
    if(p>0 && p&2==0)
    {
        if(a[u]==b[u])
        {
            flip.push_back(u);
            p=0;
        }
        for(auto i:g[u])
        {
            if(i!=par)
            {
                dfs(i,p,u);
            }
        }
    }
    else if(p==0)
    {
        if(a[u]!=b[u])
        {
            flip.push_back(u);
            p=1;
        }
        for(auto i:g[u])
        {
            if(i!=par)
            {
                dfs(i,p,u);
            }
        }
    }
    else{
        if(a[u]!=b[u])
        {
            flip.push_back(u);
            p=0;
        }
        else p++;
        for(auto i:g[u])
        {
            if(i!=par)
            {
                dfs(i,p,u);
            }
        }
    }
}
int main() {
  int n;
  cin>>n;
  g.resize(n+1);
  rp(n-1) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  
  for(int i=1; i<=n; i++)
  {
    cin >> a[i];
  }
  for(int i=1; i<=n; i++)
  {
    cin >> b[i];
  }
  dfs(1,0,-1);
    cout<<flip.size()<<endl;
    for(auto i:flip)
    {
        cout<<i<<endl;
    }
  return 0;
}