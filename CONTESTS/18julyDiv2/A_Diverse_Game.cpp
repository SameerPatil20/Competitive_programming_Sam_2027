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
    rp(n)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    if(n%2==0)
    {
        rp(n/2)
        {
            for(int j=0;j<m;j++)
            {
                swap(a[i][j],a[n-i-1][j]);
            }
        }
        rp(n)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else if(m%2==0)
    {
        rp(m/2)
        {
            for(int j=0;j<n;j++)
            {
                swap(a[j][i],a[j][m-1-i]);
            }
        }
        rp(n)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else if(n==1 && m==1)
    {
        cout<<-1<<endl;    
    }
    else if(m!=1)
    {
        rp(n/2)
        {
            for(int j=0;j<m;j++)
            {
                swap(a[i][j],a[n-2-i][j]);
            }
        }
        rp(n-1)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        rp(m)
        {
            cout<<a[n-1][(1+i)%m]<<" ";
        }
        cout<<endl;
    }
    else{
        rp(n)
        {
            cout<<a[(i+1)%n][0]<<endl;
        }
    }
  }
  return 0;
}