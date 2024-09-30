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
vector<int> dist1;
vector<int> dist;
int k;
void bfs(int i)
{
    queue<int> q;
    q.push(i);
    dist1[i] = 0;
    while(!q.empty())
    {
      int u = q.front();
      q.pop();
      for(int v:g[u])
      {
        if(dist1[v] == -1)
        {
          dist1[v] = dist1[u] + 1;
          q.push(v);
        }
      }
    }
}
void bfs2(int i)
{
    queue<int> q;
    q.push(i);
    dist[i] = 0;
    while(!q.empty())
    {
      int u = q.front();
      q.pop();
      for(int v:g[u])
      {
        if(dist[v] == -1)
        {
          dist[v] = dist[u] + 1;
          q.push(v);
        }
      }
    }
}
bool check=1;
void dfs(int u,int p,int deep)
{
    int deg=0;
    for(int i:g[u])
    {
        if(i!=p)
        {
            deg++;
            dfs(i,u,deep+1);
        }
    }
    if(deep!=k && deg<3)check=0;

}
int main() {
    int n;
    cin>>n>>k;
    g.resize(n+1);
    rp(n-1)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dist1.assign(n+1,-1);
    bfs(1);
    int dend=1;
    for(int i=1;i<=n;i++)
    {
        if(dist1[i]>dist1[dend])dend=i;
    }
    // cout<<dend<<endl;
    dist1.assign(n+1,-1);
    bfs(dend);
    dend=1;
    for(int i=1;i<=n;i++)
    {
        if(dist1[i]>dist1[dend])dend=i;
    }
    // cout<<dend<<endl;
    if(dist1[dend]!=2*k)
    {
        cout<<"No"<<endl;
        return 0;
    }
    dist.assign(n+1,-1);
    bfs2(dend);
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<i<<" "<<dist1[i]<<" "<<dist[i]<<endl;
    // }
    int center=-1;
    for(int i=1;i<=n;i++)
    {
        if(dist1[i]==k && dist[i]==k)center=i;
    }
    if(center==-1)
    {
        cout<<"No"<<endl;
        return 0;
    }
    // cout<<center<<endl;
    dfs(center,-1,0);
    if(check)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}