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
    int n,x,y;
    cin >> n >> x >> y;
    int a[n];
    int sum=0;
    for(int i=y-2;i>=0;i--)
    {
        if(sum>-1)a[i]=-1;
        else a[i]=1;
        sum+=a[i];
    }
    sum=0;
    for(int i=y-1;i<x;i++)
    {
        a[i]=1;
    }
    for(int i=x;i<n;i++)
    {
        if(sum>-1)a[i]=-1;
        else a[i]=1;
        sum+=a[i];
    }
    out(a,n," ")
    cout<<endl;
  }
  return 0;
}