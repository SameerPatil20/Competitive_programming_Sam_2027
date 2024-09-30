#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m;
        cin>>n>>m;
        int wash[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>wash[i][j];
            }
        }
        int dp[n][m+2];
        for(int i=0;i<n;i++)
        {
            dp[i][0]=0;
            dp[i][m+1]=0;
        }
        for(int i=1;i<=m;i++)
        {
            dp[0][i]=wash[0][i-1];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                dp[i][j]=1+max(max(dp[i-1][j],dp[i-1][j-1]),dp[i-1][j+1]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(dp[i][j]<=wash[i][j-1])cout<<1;
                else cout<<0;
            }
            cout<<endl;
        }
        
    }
}