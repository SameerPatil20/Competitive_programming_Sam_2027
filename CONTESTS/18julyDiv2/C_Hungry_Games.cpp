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
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    ll x;
    cin>>x;
    ll a[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    a[n+1]=0;
    ll dp[n+3];
    dp[n+1]=0;
    dp[n+2]=0;
    ll carry=0;
    ll end=n+1;
    ll sum=0;
    for(int i=n;i>0;i--)
    {
        carry+=a[i];
        // cout<<carry<<endl;
        while(end>i && carry>x)
        {
            carry-=a[end-1];
            end--;
        }
        // cout<<i<<" "<<end<<endl;
        dp[i]=end-i;
        dp[i]+=dp[end+1];
        // cout<<dp[i]<<endl;
        sum+=dp[i];
    }
    // out(dp,n+2," ")
    // cout<<endl;
    cout<<sum<<endl;
  }
  return 0;
}