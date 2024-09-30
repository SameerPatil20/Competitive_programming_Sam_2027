#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
struct UnionFind{
    int Nodes, *par, *rank;
    UnionFind(){}
    UnionFind(int n)
    {
        Nodes = n;
        par = new int[n+1];
        rank = new int[n+1];
        for(int i=0;i<n;i++)
        {
            par[i] = i;
            rank[i] = 1;
        }
    }
    int find(int x)
    {
        if(par[x]!=x)
        {
            return par[x]=find(par[x]);
        }
        return x;
    }
    void merge(int x,int y)
    {
        x=find(x);
        y=find(y);
        if(x==y)return;
        if(rank[x]<rank[y])
        {
            par[x]=y;
            rank[y]+=rank[x];
        }
        else
        {
            par[y]=x;
            rank[x]+=rank[y];
        }
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> edges;
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edges.push_back({c,{a,b}});
    }
    sort(edges.begin(), edges.end());
    UnionFind uf(n);
    int cost=0;
    for(int i=0;i<m;i++)
    {
        int x=uf.find(edges[i].second.first);
        int y=uf.find(edges[i].second.second);
        if(x!=y)
        {
            cost+=edges[i].first;
            uf.merge(x,y);
        }
    }
    cout<<cost<<endl;

}