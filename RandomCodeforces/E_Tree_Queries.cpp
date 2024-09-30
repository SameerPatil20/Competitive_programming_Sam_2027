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
vector<int> tin;
vector<int> tout;
vector<int> par;
vector<int> dist;
int timer=0;
void dfs(int v,int pari)
{
    tin[v]=timer++;
    for(auto &to:g[v])
    {
        if(to!=pari)
        {
            dist[to]=dist[v]+1;
            par[to]=v;
            dfs(to,v);
        }
    }
    tout[v]=timer++;
}
int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    g.resize(n+1);
    tin.resize(n+1);
    tout.resize(n+1);
    par.resize(n+1);
    dist.resize(n+1);
    rp(n-1)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dist[1]=0;
    par[1]=0;
    dfs(1,0);
    // out(tin,tin.size()," ")
    // cout<<endl;
    // out(tout,tout.size()," ")
    // cout<<endl;
    // out(par,par.size()," ")
    // cout<<endl;
    // out(dist,dist.size()," ")
    // cout<<endl;
    while(m--)
    {
        vector<pair<int,int>> queries;
        int q;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            int x;
            cin>>x;
            if(x!=1)x=par[x];
            queries.push_back({dist[x],x});
        }
        sort(queries.begin(),queries.end());
        bool check=1;
        rp(q-1)
        {
            if(!(tin[queries[i].second]<=tin[queries[i+1].second] && tout[queries[i].second]>=tout[queries[i+1].second]))
            {
                check=0;
                break;
            }
        }
        if(check)cout<<"YES\n";
        else cout<<"NO\n";
        // cout<<endl;
    }
}