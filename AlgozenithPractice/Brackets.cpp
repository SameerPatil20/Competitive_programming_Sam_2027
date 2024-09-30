#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
ll memo[201][201][201];
ll dp(int i, int op, int sp)
{
    if(memo[i][op][sp]!=-1) return memo[i][op][sp];
    if(i<op+sp)return memo[i][op][sp]=0;
    if(i==op+sp)return memo[i][op][sp]=1;
    ll x=dp(i-1,op+1,sp);
    if(op==0)x+=dp(i-1,op,sp+1);
    if(op>0)x+=dp(i-1,op-1,sp);
    if(sp>0 && op==0)x+=dp(i-1,op,sp-1);
    return memo[i][op][sp]=x;
}
int main()
{
    int n;
    cin>>n;
    memset(memo,-1,sizeof(memo));
    cout<<dp(n,0,0)<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=n;j++)
//         {
//             for(int k=0;k<=n;k++)
//             {
//                 cout<<memo[i][j][k]<<" "<<i<<" "<<j<<" "<<k<<endl;
//             }
//             cout<<endl;
//         }
//     }
}