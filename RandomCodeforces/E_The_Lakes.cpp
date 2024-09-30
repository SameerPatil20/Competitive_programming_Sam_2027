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
ll area[1010][1010];
ll vis[1010][1010];
ll dfs(ll i,ll j)
{
    if(area[i][j]==0 || vis[i][j]==1)return 0;
    vis[i][j]=1;
    return area[i][j]+dfs(i+1,j)+dfs(i-1,j)+dfs(i,j+1)+dfs(i,j-1);
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n,m;
    cin>>n>>m;
    // memset(vis,0,sizeof(vis));
    for(ll i=0;i<m+2;i++)
    {
        area[0][i]=0;
        area[n+1][i]=0;
        vis[0][i]=0;
        vis[n+1][i]=0;
    }
    for(ll i=0;i<n+2;i++)
    {
        area[i][0]=0;
        area[i][m+1]=0;
        vis[i][0]=0;
        vis[i][m+1]=0;
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            cin>>area[i][j];
            vis[i][j]=0;
        }
    }
    ll maxi=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            // cout<<area[i][j]<<" ";
            if(area[i][j]!=0 && vis[i][j]==0)
            {
                maxi=max(maxi,dfs(i,j));
            }
        }
        // cout<<endl;
    }
    cout<<maxi<<endl;
  }
  return 0;
}