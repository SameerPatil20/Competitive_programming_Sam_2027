#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int memo[1001][1001];
int n;
char a[1001];
int dp(int i,int d)
{
    if(memo[i][d]!=-1)return memo[i][d];
    while(i<n && a[i]!='?')
    {
        if(a[i]=='(')d++;
        if(a[i]==')')d--;
        i++;
        if(d<0)return memo[i][d]=0;
    }
    if(i==n)
    {
        if(d==0)
        {
            return memo[i][d]=1;
        }
        else{
            return memo[i][d]=0;
        }
    }
    if(d>0)
    {
        return memo[i][d]=dp(i+1,d+1)+dp(i+1,d-1);
    }
    else
    {
        return memo[i][d]=dp(i+1,d+1);
    }
    
}
int main()
{
    cin>>n;
    ain(a,n)
    memset(memo,-1,sizeof(memo));
    cout<<dp(0,0)<<endl;
}