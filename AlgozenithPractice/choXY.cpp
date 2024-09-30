#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int n=1;
int count=0;
int a=1,b=1;
int adummy;
ll dp[10000][10000];
pair<ll,ll> p[10000];
ll solve(int i,int bi)
{
    if(i==-1)return 0;
    if(dp[i][bi]!=-1)
    {
        return dp[i][bi];
    }
    else if(bi==0 && (a-(n+bi-b-1-i))<=0)
    {
        return dp[i][bi]=0;
    }
    else if(bi==0)
    {
        return dp[i][bi]=solve(i-1,bi)+p[i].first;
    }
    else if((a-(n+bi-b-1-i))<=0)
    {
        return dp[i][bi]=max(solve(i-1,bi),solve(i-1,bi-1)+p[i].second);
    }
    else
    {
        return dp[i][bi]=max(solve(i-1,bi)+p[i].first,solve(i-1,bi-1)+p[i].second);
    }
}
int main()
{
    cin>>n;
    cin>>a>>b;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first;
        cin>>p[i].second;
    }
    int adummy=a;
    sort(p,p+n);
    cout<<solve(n-1,b)<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<p[i].first<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<p[i].second<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++) 
    // {
    //     for(int j=0;j<=b;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}