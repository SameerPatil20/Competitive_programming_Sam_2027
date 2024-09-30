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
  vector<int> fac[1000001];
  for(int i = 1; i <= 1000000; i++)
  {
    for(int j = i; j <= 1000000; j+=i)
    {
      fac[j].push_back(i);
    }
  }
  while (TestCases--)
  {
    int n;
    cin>>n;
    int a;
    map<pair<int,int>,int> mpr;
    map<int,int> mpa;
    ll ans=0;
    for(int i = 1; i <= n; i++)
    {
        cin>>a;
        int b=gcd(a,i);
        a=a/b;
        b=i/b;
        for(int j=0;j<fac[a].size();j++)
        {
            // cout<<mpr[{b,fac[a][j]}]<<" "<<b<<" "<<fac[a][j]<<endl;
            ans+=mpr[{b,fac[a][j]}];
            mpr[{fac[a][j],b}]++;
        }
    }
    cout<<ans<<endl;
  }
  return 0;
}