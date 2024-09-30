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
using namespace std;
int n;
string s;
ll a[100001];
ll memo[100001][4];
string ens;
ll dp(int i,int r)
{
    if(memo[i][r]!=-1)return memo[i][r];
    if(i==n-1 && r<3)return memo[i][r]=0;
    if(i==n-1 && r==3)
    {
        if(s[i]==ens[r])
        {
            return memo[i][r]=a[n-1];
        }
        else return memo[i][r]=0;
    }
    if(r==3 && s[i]==ens[r])return memo[i][r]=a[i]+dp(i+1,r);
    if(s[i]==ens[r])return memo[i][r]=min(dp(i+1,r+1),dp(i+1,r)+a[i]);
    return memo[i][r]=dp(i+1,r);
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ens="hard";
    cin>>n;
    
    cin>>s;
    
    ain(a,n);
    memset(memo,-1,sizeof(memo));
    cout<<dp(0,0)<<endl;
  }
  return 0;
}