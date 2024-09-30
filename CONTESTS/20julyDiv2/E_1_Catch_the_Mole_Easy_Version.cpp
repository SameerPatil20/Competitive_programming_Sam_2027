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
vector<vector<int>> g;
vector<int> parent;
vector<int> absent;
bool bug=0;
bool dfs(int v,int p)
{
    cout<<"? "<<v<<endl;
    cout.flush();
    int ans;
    cin>>ans;
    bool t;
    if(bug==1 && ans==0)
    {
        if(p==-1 || p==1)cout<<"! "<<1<<endl;
        else cout<<"! "<<parent[p]<<endl;
        cout.flush();
        return 1;
    }
    if(ans==0)
    {
        absent[v]=0;
        bug=1;
        t=dfs(p,parent[p]);
        if(t==1)return 1;
    }
    else{
        bug=0;
        bool check=1;
        parent[v]=p;
        for(int u:g[v])
        {
            if(u!=p && absent[u])
            {
                check=0;
                t=dfs(u,v);
                if(t==1)return 1;
            }
        }
        if(check==1)
        {
            cout<<"! "<<v<<endl;
            cout.flush();
        }
    }
    return 0;
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
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    parent.assign(n+1, -1);
    absent.assign(n+1, 1);
    bool q=dfs(1,-1);
  }
  return 0;
}