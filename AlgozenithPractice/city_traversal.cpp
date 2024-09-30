#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
using ii = pair<int,int>;
int n,c;
vector<int> cost;
vector<vector<ii>> g;
int dist[1001][101];
bool vis[1001][101];
class prioritize{
    public: bool operator()(pair<ii,int> &p1,pair<ii,int> &p2)
    {
        return p1.second>p2.second;
    }
};
void djk(int sc)
{
    priority_queue<pair<ii,int>,vector<pair<ii,int>>,prioritize> pq;
    pq.push({{sc,0},0});
    dist[sc][0]=0;
    while(!pq.empty())
    {
        auto u=pq.top();
        pq.pop();
        int cfuel=u.first.second;
        int v=u.first.first;
        int tcost=u.second;
        if(vis[v][cfuel]) continue;
        vis[v][cfuel]=1;
        for(int i=cfuel+1;i<=c;i++)
        {
            pq.push({{v,i},tcost+cost[v]*(i-cfuel)});
            dist[v][i]=tcost+cost[v]*(i-cfuel);
        }
        for(auto &x:g[v])
        {
            if(cfuel<x.second)continue;  
            if(dist[x.first][cfuel-x.second]>dist[v][cfuel])     
            {
                dist[x.first][cfuel-x.second]=dist[v][cfuel];
                pq.push({{x.first,cfuel-x.second},dist[x.first][cfuel-x.second]});
            }      
        }
    }
}
int main()
{
    cin>>n;
    int m;
    cin>>m;
    cost.push_back(0);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        cost.push_back(x);
    }
    g.resize(n+1);
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    cin>>c;
    int sc;
    cin>>sc;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=c;j++)
        {
            dist[i][j]=INT_MAX;
            vis[i][j]=0;
        }
    }
    djk(sc);
    int t;
    cin>>t;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=c;j++)
        {
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dist[t][0]<<endl;
}