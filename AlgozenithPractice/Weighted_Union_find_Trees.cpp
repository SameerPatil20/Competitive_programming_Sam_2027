#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
struct UnionFind{
    int node, *par, *rank, *val;
    UnionFind(){}
    UnionFind(int n)
    {
        node=n;
        par = new int[n+1];
        rank = new int[n+1];
        val = new int[n+1];
        for(int i=1;i<=n;i++)
        {
            par[i]=i;
            rank[i]=1;
            val[i]=0;
        }
    }
    pair<int,int> find(int q)
    {
        if(q!=par[q]){
            pair<int,int>temp=find(par[q]);
            par[q]=temp.first;
            val[q]+=temp.second;
        }
        return {par[q],val[q]};
    }
    void merge(int a, int b, int c)
    {
        pair<int,int> x=find(a);
        pair<int,int> y=find(b);
        if(x.first!=y.first)
        {
            if(rank[x.first]<=rank[y.first])
            {
                par[x.first]=y.first;
                rank[y.first]+=rank[x.first];
                val[x.first]=c+y.second-x.second;
            }
            else
            {
                par[y.first]=x.first;
                rank[x.first]+=rank[y.first];
                val[y.first]=-(c+y.second-x.second);
            }
        }
    }
    void diff(int x, int y)
    {
        pair<int,int> x1=find(x);
        pair<int,int> y1=find(y);
        if(x1.first!=y1.first)
            cout<<"?"<<endl;
        else
            cout<<x1.second-y1.second<<endl;
    }
};
int main()
{
    int n,q;
    cin>>n>>q;
    UnionFind uf(n);
    while(q--)
    {
        int t;
        cin>>t;
        if(t==0)
        {
            int a,b,c;
            cin>>a>>b>>c;
            uf.merge(a,b,c);
        }
        else {
            int a,b;
            cin>>a>>b;
            uf.diff(a,b);
        }
    }
    
}