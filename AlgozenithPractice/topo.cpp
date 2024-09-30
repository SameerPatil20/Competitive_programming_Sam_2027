#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
vector<vector<int>> g;
vector<int> topo;
vector<int> visited;
void dfs(int i)
{
    visited[i]=1;
    for(int j : g[i])
    {
        if(!visited[j])dfs(j);
    }
    topo.push_back(i);
}
int main()
{
    int n;
    cin>>n;
    g.resize(n+1);
    visited.assign(n+1,0);
    for(int i=2;i<n+1;i++)
    {   int b;
    cin>>b;
    while(b--)
    {
        int z;
        cin>>z;
        g[z].push_back(i);
    }
    }
    dfs(1);
    for(int i=0;i<n;i++)
    {
        cout<<topo[n-1-i]<<" ";
    }
    cout<<endl;

}