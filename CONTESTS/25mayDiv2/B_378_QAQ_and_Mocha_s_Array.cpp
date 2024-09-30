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
    int n;
    cin>>n;
    int a[n];
    ain(a,n)
    sort(a,a+n);
    int c=a[0];
    int d;
    bool f=0;
    bool found=1;
    rp(n)
    {
        if(f==0 && (a[i]%c)!=0)
        {
            d=a[i];
            f=1;
        }
        if(f==1 && a[i]%c!=0 && a[i]%d!=0)found=false;
    }
    if(found)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}