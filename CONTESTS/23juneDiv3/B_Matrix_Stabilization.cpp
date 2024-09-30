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
    ll n,m;
    cin>>n>>m;
    ll a[n+2][m+2];
    rp(m+2)
    {
        a[0][i]=0;
        a[n+1][i]=0;
    }
    rp(n)
    {
        a[i+1][0]=0;
        a[i+1][m+1]=0;
        for(int j=1;j<=m;j++)cin>>a[i+1][j];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            ll x=max(a[i+1][j],a[i-1][j]);
            x=max(a[i][j+1],x);
            x=max(a[i][j-1],x);
            a[i][j]=min(a[i][j],x);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
  }
  return 0;
}