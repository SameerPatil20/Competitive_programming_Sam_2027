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
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    map<ll, vector<ll> > a;
    map<ll, vector<ll> > b;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a[4*(x/4)].push_back(x);
        b[4*(x/4)].push_back(i);
    }
    ll answer[n];
    for(auto &pair : a)
    {
        sort(pair.second.begin(),pair.second.end());
        sort(b[pair.first].begin(),b[pair.first].end());
        for(int j=0;j<pair.second.size();j++)
        {
            answer[b[pair.first][j]]=pair.second[j];
        }
    }
    
    out(answer,n," ")
    cout<<endl;
  }
  return 0;
}