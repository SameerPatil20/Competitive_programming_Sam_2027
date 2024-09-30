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
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char x;
            cin>>x;
            a[i][j]=x-'0';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char x;
            cin>>x;
            int y=x-'0';
            a[i][j]=y+3-a[i][j];
            a[i][j]%=3;
        }
    }
    bool check=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)continue;
            if(i==n-1 || j==m-1)
            {
                check=0;
                break;
            }
            int x=a[i][j];
            a[i][j]=0;
            a[i+1][j+1]=(a[i+1][j+1]+3-x)%3;
            a[i+1][j]=(a[i+1][j]+x)%3;
            a[i][j+1]=(a[i][j+1]+x)%3;
        }
    }
    if(check)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}