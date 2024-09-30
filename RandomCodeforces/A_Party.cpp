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
vector<int> heads;
vector<int> vis;
int dfs(int i)
{
    int maxi=1;
    for(int j:g[i])
    {
        if(vis[j])maxi=max(1+vis[j],maxi);
        else{
            vis[j]=dfs(j);
            maxi=max(1+vis[j],maxi);
        }
    }
    return maxi;

}
int main() {
  int n;
  cin>>n;
  g.resize(n+1);
  vis.assign(n+1,0);
  for(int i=1;i<n+1;i++)
  {
    int x;
    cin>>x;
    if(x==-1)heads.push_back(i);
    else{
        g[x].push_back(i);
    }
  }
//   out(heads,heads.size()," ")
//   cout<<endl;
  int maxi=0;
  for(int i=0;i<heads.size();i++)
  {
    maxi=max(maxi,dfs(heads[i]));
  }
//   out(vis,n+1," ")
//   cout<<endl;
  cout<<maxi<<endl;
    
  return 0;
}