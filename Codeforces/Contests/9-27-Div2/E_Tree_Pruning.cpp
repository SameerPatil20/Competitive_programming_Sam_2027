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
vector<int> k;
vector<vector<int>> g;
int dfs(int u,int p,int d)
{
    k[d]+=1;
    int maxi=d;
    for(auto v:g[u])
    {
        if(v!=p)
        {
            int x=dfs(v,u,d+1);
            remax(maxi,x);
        }
    }
    k[maxi+1]-=1;
    return maxi;
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    g.clear();
    g.resize(n+1);
    rp(n-1)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    k.assign(n+1,0);
    dfs(1,0,0);
    int maxi=k[0];
    rp(n)
    {
        k[i+1]+=k[i];
        maxi=max(maxi,k[i+1]);
    }
    cout<<n-maxi<<endl;

  }
  return 0;
}