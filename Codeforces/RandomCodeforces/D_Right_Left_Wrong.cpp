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
    ll n;
    cin>>n;
    ll a[n];
    ain(a,n)
    string s;
    cin>>s;
    ll counti=0;
    ll answer=0;
    ll l=0,r=n-1;
    while(l<=r)
    {
      while(l<r && s[l]!='L')
      {
        answer+=counti*a[l++];
      }
      while(l<r && s[r]!='R')
      {
        answer+=counti*a[r--];
      }
      if(l==r)
      {
        answer+=counti*a[r--];
      }
      if(l<r)
      {
        counti++;
        answer+=counti*a[l++];
        answer+=counti*a[r--];
      }
      // cout<<answer<<endl;
    }
   cout<<answer<<endl;
  }
  return 0;
}