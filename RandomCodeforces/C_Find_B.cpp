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
    ll n,q;
    cin>>n>>q;
    ll a[n];
    ain(a,n)
    pair<ll,ll> b[n+1];
    b[0].first=0;
    b[0].second=0;
    rp(n)
    {
        b[i+1].first=b[i].first+a[i];
        b[i+1].second=b[i].second+(a[i]==1);
    }
    rp(q)
    {
        int l,r;
        cin>>l>>r;
        // cout<<b[r].first-b[l-1].first<<" "<<2*(b[r].second-b[l-1].second)<<endl;
        if(l!=r && b[r].first-b[l-1].first>=r+1-l+(b[r].second-b[l-1].second))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
  }
  return 0;
}