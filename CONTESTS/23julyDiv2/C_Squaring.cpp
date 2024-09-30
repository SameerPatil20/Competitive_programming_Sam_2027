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
    ll a[n];
    ain(a,n)
    ll ans=0;
    ll m=0;
    bool check=1;
    rp(n-1)
    {
      if(a[i+1]==1 && a[i]==1)continue;
      if(a[i+1]==1 && a[i]!=1)
      {
        check=0;
        break;
      }
      if(a[i]==1)continue;
      ll k=max(0LL,long(ceil(log2(log2(a[i])/log2(a[i+1]))))+m);
      // cout<<k<<" "<<ceillog2(log2(a[i])/log2(a[i+1]))<<endl;
      ans+=k;
      m=k;
    }
    // cout<<"yo"<<endl;
    if(check)cout<<ans<<endl;
    else cout<<-1<<endl;
  }
  return 0;
}