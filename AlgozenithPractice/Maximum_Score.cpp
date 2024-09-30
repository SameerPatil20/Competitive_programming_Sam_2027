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
        int n,m,k;
        cin>>n>>m>>k;
        int a[n][m+2];
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                char x;
                cin>>x;
                a[i][j]=x-'0';
            }
        }
        int dp[n][m+2][k];
        memset(dp,-1,sizeof(dp));
        for(int i=1;i<m+1;i++)
        {
            dp[0][i][a[0][i]%k]=a[0][i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                for(int o=0;o<k;o++)
                {
                    dp[i][j][o]=max(dp[i-1][j-1][(10*k+o-a[i][j])%k],dp[i-1][j+1][(10*k+o-a[i][j])%k]);
                    if(dp[i][j][o]!=-1)dp[i][j][o]+=a[i][j];
                }
            }
        }
        int ans=-1;
        for(int i=1;i<m+1;i++)
        {
            ans=max(ans,dp[n-1][i][0]);
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m+2;j++)
        //     {
        //         for(int o=0;o<k;o++)
        //         {
        //             cout<<i<<" "<<j<<" "<<o<<" "<<dp[i][j][o]<<" ";
        //         }
        //         cout<<endl;
        //     }
        // }
        cout<<ans<<endl;
    }
}