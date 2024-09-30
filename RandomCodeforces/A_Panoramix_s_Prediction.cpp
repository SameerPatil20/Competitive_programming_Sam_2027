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
bool checkPrime(int x)
{
    if(x==1)
        return false;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)return false;
    }
    return true;
}
int main() {
  v2(int,x,y)
  if(checkPrime(x)==1)
  {
    x++;
    while(checkPrime(x)==0)
    {x++;}
    if(x==y)
    {cout<<"YES"<<endl;
    return 0;}
  }
  cout<<"NO"<<endl;
  return 0;
}