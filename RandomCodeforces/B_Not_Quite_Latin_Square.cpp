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
    char a[9];
    ain(a,9)
    // out(a,9," ")
    int i=0;
    while(a[i]!='?')
    {
        i++;
    }
    char ans=65+66+67;
    for(int j=0;j<3;j++)
    {
        if(j!=i%3)
        {
            ans-=a[3*(i/3)+j];
        }
    }
    cout<<ans<<endl;
  
}
  return 0;
}