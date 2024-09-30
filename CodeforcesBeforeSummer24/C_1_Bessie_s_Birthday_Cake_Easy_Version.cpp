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
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    //cout<<TestCases<<endl;
    long long int n,x,y;
    cin>>n>>x>>y;
    long long int a[x];
    for(long long int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    sort(a,a+x);
    ll count=x-2;
    for(ll i=0 ;i<x-1;i++)
    {
        if(a[i+1]-a[i]==2)count++;
    }
    if(a[0]==1 && a[x-1]==n-1){count++;}
    if(a[0]==2 && a[x-1]==n){count++;}
    cout<<count<<endl;
  }
  return 0;
}