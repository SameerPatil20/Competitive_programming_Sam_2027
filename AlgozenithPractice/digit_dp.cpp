#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int memo[10000][2][2][100];
string k;
int d;
string l="";
int dp(int n,int lo,int hi,int sum)
{
    cout<<n<<" "<<lo<<" "<<hi<<" "<<sum<<endl;
    if(memo[n][lo][hi][sum]!=-1)return memo[n][lo][hi][sum];
    if(n==k.size())return memo[n][lo][hi][sum]=sum==0;
    // cout<<k<<endl;
    // cout<<l<<endl;
    memo[n][lo][hi][sum]=0;
    for(int i=lo*(l[n]-'0');i<=max(9*(1-hi),k[n]-'0');i++)
    {
        memo[n][lo][hi][sum]+=dp(n+1,lo&(i==(l[n]-'0')),hi&(i==(k[n]-'0')),(sum+i)%d);
    }
    return memo[n][lo][hi][sum];
}
int main()
{
    cin>>k;
    for(int i=0;i<k.size()-1;i++)
    {
        l+='0';
    }
    l+='1';
    cin>>d;
    memset(memo,-1,sizeof(memo));
    int ans=dp(0,1,1,0);
    cout<<ans<<endl;
    return 0;
}