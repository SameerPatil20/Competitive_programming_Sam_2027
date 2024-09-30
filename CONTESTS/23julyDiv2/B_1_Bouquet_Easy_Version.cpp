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
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ain(a,n);
    ll maxi=0;
    sort(a,a+n);
    ll sum=a[0];
    ll mini=0;
    ll i=1;
    while(true)
    {
        while(sum>m)
        {
            sum-=a[mini];
            mini++;
        }
        if(maxi<sum)
        {
            // cout<<mini<<" "<<i<<endl;
            maxi=sum;
        }
        if(i==n)break;
        sum+=a[i];
        while(a[mini]<a[i]-1)
        {
            sum-=a[mini];
            mini++;
        }
        i++;
    }
    cout<<maxi<<endl;
  }
  return 0;
}