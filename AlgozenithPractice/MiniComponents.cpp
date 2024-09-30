#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int visited[100100];
vector<int> edge[100100];
int DFS(int v)
{
    int ans=1;
    visited[v]++;
    for(int i : edge[v])
    {
        if(!visited[i])
        {
            ans+=DFS(i);
        }
    }
    return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    memset(visited, 0, sizeof(visited));
    while(m--)
    {
        int p,q;
        cin>>p>>q;
        edge[p-1].push_back(q-1);
    }
    vector<int> cont;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            cont.push_back(DFS(i));
        }
    }
    int sum=0;
    int ans=0;
    for(int i=0;i<cont.size();i++)
    {
        ans+=sum*cont[i];
        sum+=cont[i];
    }
    cout<<ans<<endl;
}