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
vector<vector<int>> tree;
vector<bool> dpin;
vector<bool> dpout;
vector<int> counter;
void dfs(int v, int p)
{
    for(auto u: tree[v])
    {
        if(u!=p)
        {
            dfs(u,v);
            dpin[v]=dpin[v]|(1-dpin[u]);
            if(1-dpin[u])counter[v]++;
        }
    }
}
void dfso(int v, int p)
{
    if(p!=0)
    {dpout[v]=1-dpout[p];
    dpout[v]=dpout[v]&((counter[p]-(1-dpin[v]))==0);}
    for(auto u: tree[v])
    {
        if(u!=p)
        {
            dfso(u,v);
        }
    }
}
int main() {
  int n,t;
  cin>>n>>t;
  tree.resize(n+1);
  rp(n-1)
  {
    int u,v;
    cin>>u>>v;
    tree[u].push_back(v);
    tree[v].push_back(u);
  }
  dpin.assign(n+1,0);
  counter.assign(n+1,0);
  dpout.assign(n+1,0);
  dpout[0]=0;
  dfs(1,0);
  counter[0]=1-dpin[1];
  dfso(1,0);
//   out(dpin,n+1," ")
//   cout<<endl;
//   out(dpout,n+1," ")
//   cout<<endl;
//   out(counter,n+1," ")
//   cout<<endl;
  rp(t)
  {
    int g;
    cin>>g;
    cout<<(dpin[g]|dpout[g]? "Ron":"Hermione")<<endl;
  }
  return 0;
}
