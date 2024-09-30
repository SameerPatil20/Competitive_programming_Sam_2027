#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int memo[100001];
int n;
int dp(int i)
{
    if(memo[i]!=-1)return memo[i];
    if(i==n)return memo[i]=0;
    if(2*i>n)return memo[i]=n-i;
    int mini=min(dp(i+1),dp(2*i));
    if(3*i<=n)mini=min(mini,dp(3*i));
    return memo[i]=mini+1;        
}
int main()
{    
    cin>>n;
    memset(memo,-1,sizeof(memo));
    cout<<dp(1)<<endl;
    out(memo,n+1," ")
    cout<<endl;
}