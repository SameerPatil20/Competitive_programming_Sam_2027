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
  int n;
  cin>>n;
  vector<vector<int>> g(n+1);
  rp(n-1) {
    int a, b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  int pos[n+1];
  bool pr[n+1];
  for(int i=1;i<=n;i++)
  {
    cin>>pos[i];
    pr[i]=false;
  }
  if(pos[1]!=1)
  {
    cout<<"No"<<endl;
    return 0;
  }
  queue<int> q;
  q.push(pos[1]);
  pr[pos[1]]=1;
  pair<int,int> dist[n+1];
  dist[pos[1]].first=1;
  dist[pos[1]].second=-1;
//   int count=1;
//   int dis=1;
  while(!q.empty())
  {
    int u=q.front();
    // if(dist[u].first==dis)
    // {
    //     dist[u].second=dist[u].first-1+count;
    // }
    // else{
    //     // cout<<u<<endl;
    //     count=q.size();
    //     dis=dist[u].first;
    //     dist[u].second=dist[u].first-1+count;
    // }
    q.pop();
    for(auto i : g[u])
    {
        if(pr[i]==0){
            q.push(i);
            dist[i].second=u;
            dist[i].first=dist[u].first+1;
            pr[i]=1;
        }
    }
  }
//   rp(n)
//   {
//     cout<<dist[i+1].first<<" "<<dist[i+1].second<<" "<<pr[i+1]<<endl;
//   }

  int i=1;
  int j=2;
  bool check=1;
  while(j<=n)
  {
    // cout<<i<<" "<<j<<endl;
    if(dist[pos[j]].first==dist[pos[j-1]].first || dist[pos[j]].first==dist[pos[j-1]].first+1)
    {
        if(dist[pos[j]].second!=pos[i])
        {
            i++;
        }
        else{
            if(pr[pos[j]]==0)
            {
                cout<<"No"<<endl;
                return 0;
            }
            pr[pos[j]]=0;
            j++;
        }
    }
    else{
        // cout<<i<<" "<<j<<endl;
        check=0;
        break;
    }
    if(i==j)
    {
        // cout<<i<<" "<<j<<endl;
        check=0;
        break;
    }
  }
  if(check)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}