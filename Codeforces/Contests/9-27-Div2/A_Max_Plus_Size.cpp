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
    pair<ll,ll> a[n];
    ll maxi=0;
    rp(n)
    {
        ll x;
        cin>>x;
        a[i].first = x;
        a[i].second = i;
    }
    sort(a,a+n);
    if(n%2==0)
    {
        cout<<a[n-1].first+n/2<<endl;
    }
    else{
        int i=n-1;
        while(i>=0)
        {
            if(a[i].first==a[n-1].first)
            {
                if(a[i].second%2==0)
                {
                    cout<<a[n-1].first+1+n/2<<endl;
                    break;
                }
            }
            else
            {
                cout<<a[n-1].first+n/2<<endl;
                break;
            }
            i--;
        }
    }
  }
  return 0;
}