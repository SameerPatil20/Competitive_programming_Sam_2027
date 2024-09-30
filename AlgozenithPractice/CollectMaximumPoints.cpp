#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll dp[n+3];
    dp[0]=dp[1]=dp[2]=0;
    for(int i=0;i<n;i++)
    {
        dp[i+3]=max(dp[i+1]+a[i+1],dp[i]+a[i]);
    }
    out(dp,n+3," ")
    cout<<endl;
    cout<<dp[n+2]<<endl;
    
}