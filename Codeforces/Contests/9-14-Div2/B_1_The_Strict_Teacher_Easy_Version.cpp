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
    ll n,m,q;
    cin >> n >> m >> q;
    ll a[m];
    ain(a,m)
    pair<ll,ll> b[q];
    rp(q)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(a,a+m);
    sort(b,b+q);
    ll ans[q];
    int w=0;
    rp(q)
    {
        while(w<m && a[w]<b[i].first)
        {
            w++;
        }
        if(a[w]==b[i].first)
        {
            ans[b[i].second] = 1;
            continue;
        }
        if(w==0)
        {
            ans[b[i].second] = a[0]-1;
            continue;
        }
        if(w==m)
        {
            ans[b[i].second] = n-a[m-1];
            continue;
        }
        ans[b[i].second] = (a[w]-a[w-1])/2;

    }
    out(ans,q," ")
    cout<<endl;
  }
  return 0;
}