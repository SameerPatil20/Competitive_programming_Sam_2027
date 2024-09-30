#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define v1(type,x) type x;cin>>x;
#define v2(type,x,y) type x,y;cin>>x>>y;
#define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
#define remax(maxo,new) maxo=max(maxo,new);
#define endl '\n'
#define MOD 1000000007
using namespace std;
int main() {
    int n,m;
    cin>>m>>n;
    ll s[100006];
    ain(s,m)
    ll l[100004];
    ain(l,m)
    ll dp[1000][109];
    rp(m)
    {
        dp[0][i]=1LL;
    }
    // out(s,m," ")
    // cout<<endl;
    // out(l,m," ")
    // cout<<endl;
    for(int j=1;j<=n;j++)
    {
        rp(m)
        {
            dp[j][i]=0LL;
            if(s[i]>0)
            {
                for(int k=0;k<m;k++)
                {
                    dp[j][i]+=s[i]*(l[k]+s[k])*dp[j-1][k];
                    dp[j][i]%=MOD;
                }
                // cout<<dp[j][i]<<endl;
            }
            if(l[i]>0)
            {
                for(int k=0;k<m;k++)
                {
                    dp[j][i]+=l[i]*s[k]*(dp[j-1][k]);
                    dp[j][i]%=MOD;
                }
            }
            // cout<<dp[j][i]<<" "<<n<<" "<<j<<" "<<i<<endl;
        }
    }
    
    cout<<dp[n][0]<<endl;
    // for(int i=0;i<n+1;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}