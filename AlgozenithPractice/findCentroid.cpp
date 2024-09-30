#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
// vector<vector<int>> g;
// int memo[1010][1010];
// int dfs(int i,int par)
// {
//     if(memo[i][par]!=-1)return memo[i][par];
//     int ans=1;
//     for(int j:g[i])
//     {
//         if(j==par)continue;
//         ans+=dfs(j,i);
//     }
//     return memo[i][par]=ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     memset(memo,-1,sizeof(memo));
//     g.resize(n+1);
//     for(int i=0;i<n-1;i++)
//     {
//         int a,b;
//         cin>>a>>b;
//         g[a].push_back(b);
//         g[b].push_back(a);
//     }
//     vector<int> cent;
//     for(int i=1;i<n;i++)
//     {
//         int check=1;
//         for(int j:g[i])
//         {
//             if(dfs(j,i)>n/2)
//             {
//                 check=0;
//                 break;
//             }
//         }
//         if(check)cent.push_back(i);
//     }
//     out(cent,cent.size()," ")
//     cout<<endl;
// }
int n;
vector<vector<int>> g;
vector<int> cent;
vector<int> subtreeSize;
void dfs(int i,int par)
{
    subtreeSize[i]=1;
    for(int j:g[i])
    {
        if(j==par)continue;
        dfs(j,i);
        subtreeSize[i]+=subtreeSize[j];
    }
    bool check=1;
    for(int j:g[i])
    {
        if(j==par)continue;
        if(2*subtreeSize[j]>n)
        {
            check=0;
            break;
        }
    }
    if(2*(n-subtreeSize[i])>n)check=0;
    if(check)cent.push_back(i);
}
int main()
{
    cin>>n;
    g.resize(n+1);
    subtreeSize.resize(n+1);
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1,0);
    out(cent,cent.size()," ")
    cout<<endl;
}