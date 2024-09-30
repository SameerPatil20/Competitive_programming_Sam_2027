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
int n,p,k;
int a[100001];
int memo[100001][2];
int x,y;
int dp(int i,int des)
{
    // cout<<i<<" "<<des<<endl;
    if(i>n-1)return 0;
    if(memo[i][des]!=-1)
    {
        return memo[i][des];
    }
    if(i==n-1)
    {
        return memo[i][des]=x*(1-a[i])+dp(i+k,0);  
    }
    if(des==0)return memo[i][des]=x*(1-a[i])+dp(i+k,des);
    else
    {
        return memo[i][des]=min(x*(1-a[i])+dp(i+k,0),y+dp(i+1,1));
    }
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    cin>>n>>p>>k;
    rp(n)
    {
        char k;
        cin>>k;
        a[i]=k-'0';
    }
    cin>>x>>y;
    memset(memo,-1,sizeof(memo));
    cout<<dp(p-1,1)<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<memo[i][0]<<" "<<memo[i][1]<<endl;
    // }
  }
  return 0;
}