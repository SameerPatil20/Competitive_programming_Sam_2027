#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
vector<vector<int>> g;
vector<int> topo;
vector<int> indegree;
void kahn(int n)
{
    queue<int> q;
    for(int i=1;i<=n;i++)
    {
        if(!indegree[i])q.push(i);
    }
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        topo.push_back(x);
        for(int i : g[x])
        {
            indegree[i]--;
            if(!indegree[i])q.push(i);
        }
    }

}
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    g.resize(n+1);
    indegree.assign(n+1,0);
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        indegree[b]++;
    }
    kahn(n);
    int dp[n+1];
    // memset(dp,1,sizeof(dp));
    dp[n]=1;
    int answer=1;
    for(int i=n-1;i>=0;i--)
    {
        dp[i]=1;
        for(int j : g[i])
        {
            dp[i]=max(dp[i],1+dp[j]);
        }
        answer=max(dp[i],answer);
    }
    out(dp,n+1," ")
    cout<<endl;
    cout<<answer<<endl;
}