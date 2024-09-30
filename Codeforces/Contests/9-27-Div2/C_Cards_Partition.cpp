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
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ain(a,n)
    ll maxi=0LL,sum=0LL;
    rp(n)
    {
        if(maxi<a[i])maxi=a[i];
        sum+=a[i];
    }
    ll ans=1;
    for(int i=n;i>0;i--)
    {
        ll bags=(sum+k)/i;
        if(bags>=maxi && bags*i>=sum)
        {
            ans=i;
            break;
        }
    }
    // ll l=1LL;
    // ll r=n;
    // while(l<r)
    // {
    //     ll mid=(l+r+1LL)/2LL;
    //     ll bags=(sum+k)/mid;
    //     if(bags>=maxi && bags*mid>=sum)
    //     {
    //         l=mid;
    //         continue;
    //     }
    //     r=mid-1LL;
    // }
    cout<<ans<<endl;
  }
  return 0;
}