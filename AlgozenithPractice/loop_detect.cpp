#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
vector<vector<int>> g;
bool x;
vector<bool> visited;
void dfs(int v,int par)
{
    if(x==1)return;
    visited[v]=1;
    for(auto i:g[v])
    {
        if(visited[i]==1 && i!=par)
        {
            x=1;
            return;
        }
        if(visited[i]==0)
        {
            dfs(i,v);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    g.resize(n+1);
    visited.assign(n+1,0);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    x=0;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            dfs(i,-1);
        }
        if(x==1)break;
    }
    if(x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}