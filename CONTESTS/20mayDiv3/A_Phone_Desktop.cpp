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
#define endl '\n'
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int x,y;
    cin>>x>>y;
    int count=0;
    if(y%2==0)
    {
        x=x-7*(y/2);
        if(x>0)
        cout<<y/2+ceil(x/15.0)<<endl;
        else
        cout<<y/2<<endl;
    }
    else{
        x=x-7*(y/2);
        x-=11;
        if(x>0)
        cout<<1+y/2+ceil(x/15.0)<<endl;
        else
        cout<<1+y/2<<endl;
    }
  }
  return 0;
}