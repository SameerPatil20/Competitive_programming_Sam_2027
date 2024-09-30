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
    ll n;
    cin>>n;
    ll a[n];
    ain(a,n)
    pair<ll,ll> le[n];
    pair<ll,ll> ri[n];
    le[0]={n,0};
    ri[n-1]={n,n-1};
    for(int i=1;i<n;i++)
    {
        if(le[i-1].first-1>a[i-1]-1)
        {
                      le[i].second=i-1;
        }
        else le[i].second=le[i-1].second;
        le[i].first=min(le[i-1].first-1,a[i-1]-1);
    }
    for(int i=n-2;i>=0;i--)
    {
        if(ri[i+1].first-1>a[i+1]-1)ri[i].second=i+1;
        else ri[i].second=ri[i+1].second;
        ri[i].first=min(ri[i+1].first-1,a[i+1]-1);
    }
    ll ans=0;
    // rp(n)
    // {
    //     cout<<le[i].first<<" "<<le[i].second<<endl;
    // }
    rp(n)
    {
        ll l=i,r=i;
        ll timer=1;
        while(l>=0 && r<n)
        {
            if(le[l].first<ri[r].first)
            {
                if(le[l].first<timer)
                {
                    cout<<i<<" "<<l<<endl;break;}
                timer+=l-le[l].second;
                l=le[l].second;
            }
            else
            {
                if(ri[r].first<timer)break;
                timer+=ri[r].second-r;
                r=ri[r].second;
            }
            if(l==0 && r==n-1){
                cout<<i<<endl;
                ans++;
                break;
            }
        }
        
    }
    cout<<ans<<endl;
  }
  return 0;
}