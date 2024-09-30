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
    v3(ll,n,m,k)
    
    vector<pair<pair<ll,ll>,ll>> v;
    for(int i=0;i<k;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({{x,y},i});
    }
    sort(v.begin(),v.end());
    ll mini[k];
    mini[k-1]=v.back().first.second-1;
    int ch[k];
    set(ch,k,0)
    ch[v[k-1].second]=1;
    for(int i=k-2;i>=0;i--)
    {
      if(mini[i+1]>v[i].first.second-1)
      {
        mini[i]=v[i].first.second-1;
        ch[v[i].second]=1;
      }
      else mini[i]=mini[i+1];
    }
    ll ans=0;
    ll add=0;
    ll i=0;
    ll row=0;
    // out(mini,k," ")
    // cout<<endl;
    while(i<k)
    {
      if(add<=mini[i])
      {
        add=mini[i];
      }
      int x=v[i].first.first;
      ans+=add*(x-row);
      row=x;
      
      ll j=i+1;
      while(j<k && v[j].first.first==x)
      {
        ch[v[j].second]=0;
        j++;
      }
      i=j;
      // cout<<ans<<endl;
    }
    // cout<<row<<endl;
    ans+=m*(n-row);
    cout<<ans<<endl;
    out(ch,k," ")
    cout<<endl;
  }
  return 0;
}