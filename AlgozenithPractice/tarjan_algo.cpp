#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
vector<vector<int>> g;
vector<bool>ap;
vector<int> visited;
vector<int> low;
vector<int> p;
vector<int> disc;
int tim=0;
void tarjan(int vertex)
{
    visited[vertex]=1;
    low[vertex]=disc[vertex]=++tim;
    int child=0;
    for(int i=0;i<g[vertex].size();i++)
    {
        if(visited[g[vertex][i]]==0)
        {
            child++;
            p[i]=vertex;
            tarjan(g[vertex][i]);
            low[vertex]=min(low[vertex],low[g[vertex][i]]);
            if(p[vertex]!=-1 && low[g[vertex][i]]>=disc[vertex])ap[vertex]=1;
        }
        else if (p[vertex] != g[vertex][i])low[vertex] = min(low[vertex], disc[g[vertex][i]]);
    }
    // if(p[vertex]==-1 && child>1)ap.push_back(vertex);
}
int main()
{
    int n,m;
    cin>>n>>m;
    g.resize(n+1);
    visited.assign(n+1,0);
    disc.assign(n+1,0);
    p.assign(n+1,-1);
    ap.assign(n+1,0);
    low.assign(n+1,INT_MAX);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    tarjan(1);
    for(int i=1;i<n+1;i++)
    {
        if(ap[i])cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1;i<n+1;i++)
    {
        cout<<low[i]<<" "<<disc[i]<<endl;;
    }
    cout<<endl;
}