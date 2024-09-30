#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(ll lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(ll lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(ll lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define v1(type,x) type x;cin>>x;
#define v2(type,x,y) type x,y;cin>>x>>y;
#define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
#define remax(maxo,new) maxo=max(maxo,new);
#define endl '\n'
using namespace std;
int main() {
  ll TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll n;
    cin>>n;
    ll arr[n];
    ain(arr,n);
    vector<ll> v;
    ll sum=0;
    rp(n-1)
    {
        if(arr[i]>arr[i+1])
        {
            v.push_back(arr[i]-arr[i+1]);
            sum+=arr[i]-arr[i+1];
            arr[i+1]=arr[i];
        }
    }
    if(v.size()==0)
    {
        cout<<0<<endl;
        continue;
    }
    sort(v.begin(),v.end());
    cout<<sum+v.back()<<endl;

  }
  return 0;
}