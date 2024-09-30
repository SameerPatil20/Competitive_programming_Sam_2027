#include<bits/stdc++.h>
#define ll long long int
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
vector<vector<pair<int,int>>> g;
int mehnat[100100];
int candy[100100];
void dfs(int v,int p,int edge)
{
    for(auto to:g[v])
    {
        if(to.first!=p)
        {
            candy[to.first]+=max(0,candy[v]-1);
            mehnat[to.second]+=max(0,candy[v]-1);
            candy[v]=candy[v]>0;
            dfs(to.first,v,to.second);
        }
    }
    if(p!=0)
    {candy[p]+=max(0,candy[v]-1);
    mehnat[edge]-=max(0,candy[v]-1);
    candy[v]=candy[v]>0;}
}
int main()
{
    int n;
    cin>>n;
    g.resize(n+1);
    rp(n)
    {
        cin>>candy[i+1];
    }
    // out(candy,n+1," ")
    // cout<<endl;
    rp(n-1)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back({v,i});
        g[v].push_back({u,i});
        mehnat[i]=0;
    }
    dfs(1,0,0);
    if(candy[1]!=1)
    dfs(1,0,0);
    int sum=0;
    // out(candy,n+1," ")
    // cout<<endl;
    rp(n-1)
    {
        // cout<<mehnat[i]<<endl;
        sum+=abs(mehnat[i]);
    }
    cout<<sum<<endl;
}
