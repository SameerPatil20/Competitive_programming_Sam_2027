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
// vector<int> visited;
vector<int> par;
void bfs(int s)
{
    queue<int> q;
    q.push(1);
    par[s]=-1;
    // vis[s]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i:g[u])
        {
            if(!par[i])
            {
                q.push(i);
                par[i]=u;
                // if(i==n)break;
                // visited[i]=1;
            }
        }
    }
}
void pri(int n)
{
    if(n!=1)pri(par[n]);
    cout<<n<<" ";
}
int main() {
  int n;
  cin>>n;
  g.resize(n+1);
//   par.resize(n+1);
  par.assign(n+1,0);
  for(int i=2;i<n+1;i++)
  {
    int x;
    cin>>x;
    g[x].push_back(i);
  }
  bfs(1);
    pri(n);
    cout<<endl;
  return 0;
}