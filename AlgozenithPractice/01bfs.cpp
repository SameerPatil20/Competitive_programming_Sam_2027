#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
vector<vector<pair<int,bool>>> g;
vector<int> dist;
int main()
{
    int n;
    cin>>n;
    g.resize(n+1);
    dist.assign(n+1,INT_MAX);
    int m;
    cin>>m;
    while(m--)
    {
        int a,b;
        bool c;
        cin>>a>>b>>c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }
    deque<int> q;
    q.push_back(1);
    dist[1]=0;
    while(!q.empty())
    {
        int u=q.front();
        cout<<u<<" "<<q.size()<<endl;
        q.pop_front();
        for(auto v:g[u])
        {
            if(dist[v.first]>dist[u]+v.second)
            {
                if(v.second==0)
                {
                    q.push_front(v.first);
                    dist[v.first]=dist[u];
                }
                else 
                {
                    q.push_back(v.first);
                    dist[v.first]=dist[u]+1;
                }
            }
            
        }
    }
    out(dist,n+1," ");
    cout<<endl;
}