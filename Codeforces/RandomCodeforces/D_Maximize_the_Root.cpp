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
vector<vector<int>> tree;
vector<ll> a;
ll dfs(int v, ll p)
{
    ll mini=__LONG_LONG_MAX__;
    for(int u:tree[v])
    {
        
        mini=min(mini,dfs(u,v));
    }
    if(mini==__LONG_LONG_MAX__)return a[v];
    if(p==0)return mini+a[v];
    if(mini<=a[v])return mini;
    return (mini+a[v])/2;
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    a.clear();
    a.resize(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    tree.clear();
    tree.resize(n+1);
    for(int i=2;i<=n;i++)
    {
        int j;
        cin>>j;
        tree[j].push_back(i);
    }
  cout<<dfs(1,0)<<endl;
  }
  return 0;
}