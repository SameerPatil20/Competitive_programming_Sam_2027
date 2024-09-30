#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
vector<vector<int>> g;
vector<int> mark;
void bfs(int s)
{
    mark[s]=0;
    stack<int> p;
    p.push(s);
    while(!p.empty())
    {
        int u=p.top();
        p.pop();
        for(int i : g[u])
        {
            if(mark[i]>mark[u]+1)
            {
                mark[i]=mark[u]+1;
                p.push(i);
            }
        }
        // if(p.top()==u)p.pop();
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    mark.assign(n+1,INT_MAX);
    g.resize(n+1);
    for(int i=0;i<m;i++)
    {
        int p,q;
        cin>>p>>q;
        g[p].push_back(q);
        g[q].push_back(p);
    }
    bfs(1);
    out(mark,n+1," ")
    cout<<endl;
}