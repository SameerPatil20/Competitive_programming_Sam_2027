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
    v3(ll,r,k,money)
    ll a[k+1];
    a[0]=1;
    bool f=1;
    rp(k)
    {
        a[i+1]=1+a[i]/(r-1);
        a[i+1]+=a[i];
        if(a[i+1]>money)
        {
            f=0;
            break;
        }
    }

    // int p=1+(k-1)/(r-1);
    // int q=1+(p+k-1)/(r-1);
    // cout<<a[k]<<endl;
    if(f==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}