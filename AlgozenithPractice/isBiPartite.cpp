#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
vector<int> visited;
vector<vector<int>> g;
bool dfs(int v)
{
    for(int i : g[v])
    {
        if(visited[i]==visited[v])return false;
        if(!visited[i])
        {
            visited[i]=3-visited[v];
            dfs(i);
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        visited.assign(n+1,0);
        g.clear();
        g.resize(n+1);
        while(m--)
        {
            cout<<"input"<<endl;
            int p,q;
            cin>>p>>q;
            g[p].push_back(q);
            g[q].push_back(p);
        }
        bool check=1;;
        for(int i=1;i<=n;i++)
        {
            if(!visited[i])
            {
                visited[i]=1;
                check=dfs(i);
                if(check==0)break;
            }
        }
        if(check)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}