#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int memo[101][101];
int a[101];
int dp(int l,int r)
{
    if(l>r)return 0;
    if(memo[l][r]!=-1)
        return memo[l][r];
    if(l==r)return memo[l][r]=1;
    int ans=1+dp(l+1,r);
    if(l+1==r)
    {
        return memo[l][r]=2-(a[l]==a[r]);
    }
    if(l+1<r)
    {
        if(a[l]==a[l+1])
            ans=min(ans,1+dp(l+2,r));
    }
    for(int i=l+2;i<=r;i++)
    {
        if(a[l]==a[i])
            ans=min(ans,dp(l+1,i-1)+dp(i+1,r));
    }
    return memo[l][r]=ans;
}
int main()
{
    int n;
    cin>>n;
    ain(a,n);
    memset(memo,-1,sizeof(memo));
    cout<<dp(0,n-1)<<endl;
}