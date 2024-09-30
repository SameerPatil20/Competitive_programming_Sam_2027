#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
using ii = pair<int,int>;
class prioritize{
    public: bool operator()(ii &p1,ii &p2)
    {
        return p1.second>p2.second;
    }
};
vector<vector<ii>> g;
vector<ll> dist;
vector<bool> vis;
void Dijkstra(int sc)
{
    priority_queue<ii,vector<ii>,prioritize> pq;
    pq.push({sc,0});
    dist[sc]=0;
    while(!pq.empty())
    {
        ii x=pq.top();
        pq.pop();
        int u=x.first;
        if(vis[u]) continue;
        vis[u]=1;
        for(auto v:g[u])
        {
            if(dist[v.first]>dist[u]+v.second)
            {
                dist[v.first]=dist[u]+v.second;
                pq.push({v.first,dist[v.first]});
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    g.clear();
    g.resize(n+1);
    dist.assign(n+1,1e18);
    vis.assign(n+1,0);
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }
    Dijkstra(1);
    out(dist,n+1," ");
}