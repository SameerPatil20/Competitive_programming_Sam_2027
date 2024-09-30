#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
ll memo[101][101][23];
int Kg,Kr;
ll solve(int Ng,int Nr,int curr)
{
    if(memo[Ng][Nr][curr]!=-1)return memo[Ng][Nr][curr];
    if(Ng==0 && Nr==0)return memo[Ng][Nr][curr]=1;
    if(Nr==0)
    {
        if(curr!=Kg && curr<12)return memo[Ng][Nr][curr]=solve(Ng-1,Nr,curr+1);
        else if(curr!=Kg && curr>=12)return memo[Ng][Nr][curr]=solve(Ng-1,Nr,1);
        else return memo[Ng][Nr][curr]=0;
    }
    if(Ng==0)
    {
        if(curr!=11+Kr)return memo[Ng][Nr][curr]=solve(Ng,Nr-1,max(curr+1,12));
        else return memo[Ng][Nr][curr]=0;
    }
    if(curr==11+Kr)return memo[Ng][Nr][curr]=solve(Ng-1,Nr,1);
    else if(curr==Kg)return memo[Ng][Nr][curr]=solve(Ng,Nr-1,12);
    else 
    {
        if(curr==0)return memo[Ng][Nr][curr]=solve(Ng-1,Nr,1)+solve(Ng,Nr-1,12);
        else if(curr<12) return memo[Ng][Nr][curr]=solve(Ng-1,Nr,curr+1)+solve(Ng,Nr-1,12);
        else return memo[Ng][Nr][curr]=solve(Ng-1,Nr,1)+solve(Ng,Nr-1,curr+1);
    }
}

const int mod=1e8;

int dp[101][101][2];
int k1,k2;

int calc(int n1, int n2, bool f) {
   if(n1 + n2 == 0)
       return 1;
   if(dp[n1][n2][f] != -1)
       return dp[n1][n2][f];
   
   dp[n1][n2][f]=0;
   if(f==0){
       for(int i = 1; i <= min(n1,k1); ++i) {
           dp[n1][n2][f] = (dp[n1][n2][f] + calc(n1-i,n2,1-f))%mod;
       }
   }
   else{
       for (int i = 1; i <= min(n2,k2); ++i) {
           dp[n1][n2][f] = (dp[n1][n2][f] + calc(n1,n2-i,1-f))%mod;
       }
   }
   return dp[n1][n2][f];
}

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int Ng,Nr;
        cin>>Ng>>Nr>>Kg>>Kr;
        memset(memo,-1,sizeof(memo));
        cout<<solve(Ng,Nr,0)<<endl;
        // for(int i=0;i<Ng;i++)
        // {
        //     for(int j=0;j<Nr;j++)
        //     {
        //         for(int k=0;k<21;k++)
        //         {
        //             cout<<memo[i][j][k]<<" ";
        //         }
        //         cout<<endl;
        //     }
        // }
        int n1, n2;
        n1=Ng;n2=Nr,k1=Kg,k2=Kr;
        for (int i = 0; i <= n1; ++i) {
           for (int j = 0; j <= n2; ++j) {
               dp[i][j][0]=dp[i][j][1]=-1;
           }
       }
       cout<<(calc(n1,n2,0) + calc(n1,n2,1))%mod<<"\n";
    }
}