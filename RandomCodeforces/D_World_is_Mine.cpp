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
int x;
vector<int> uniqu;
int memo[5050][5050];
int dp(int i,int j)
{
    if(i==x)return 0;
    if(j<0)return INT_MIN;
    if(memo[i][j]!=-1)return memo[i][j];
    if(j<uniqu[i])
    {
        return memo[i][j]=dp(i+1,j+1)+1;
    }
    return memo[i][j]=min(dp(i+1,j+1)+1,dp(i+1,j-uniqu[i]));

}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    ll a[n];
    ain(a,n);
    sort(a, a + n);
    int u=0;
    while(u<n)
    {
        int count=1;
        while(u<n-1 && a[u]==a[u+1])
        {
            count++;
            u++;
        }
        u++;
        uniqu.push_back(count);
    }
    x=uniqu.size();
    rp(x)
    {
        rp2(x,j)
        {
            memo[i][j]=-1;
        }
    }
    cout<<dp(0,0)<<endl;
    uniqu.clear();
  }
  return 0;
}