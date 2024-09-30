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
vector<int> visited;
void DFS(int v)
{
    visited[v]++;
    for(int i : g[v])
    {
        if(!visited[i])
        {
            DFS(i);
        }
    }
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ain(a,n);
    g.clear();
    g.resize(2*n+1);
    map<ll,vector<ll>> mp;
    g[1].push_back(n+1);
    g[n+1].push_back(1);
    if(k>=n)
    {
        rp(n-1)
        {
            g[i+2].push_back(n+i+2);
            g[n+i+2].push_back(i+2);
        }
    }
     for(int i=1;i<g.size();i++)
    {
        for(int j=0;j<g[i].size();j++)cout<<g[i][j]<<" ";
        cout<<endl;
    }
    rp(n)
    {
        if(mp[a[i]].size()>0)
                {
                    ll u=mp[a[i]].back();
                    if(i-u<=k)
                    {
                        g[u+1].push_back(i+1);
                        g[i+1].push_back(u+1);
                    }
                    if(n+u-i<=k)
                    {
                        g[u+1].push_back(n+i+1);
                        g[n+i+1].push_back(u+1);
                    }
                }
                // mp[i].push_back(i);
        for(int j=2;j*j<=a[i];j++)
        {
            
                // mp[a[i]].push_back(i);
            if(a[i]%j==0)
            {
                if(mp[j].size()>0)
                {
                    ll u=mp[j].back();
                    if(i-u<=k)
                    {
                        g[u+1].push_back(i+1);
                        g[i+1].push_back(u+1);
                        g[n+u+1].push_back(n+i+1);
                        g[n+i+1].push_back(n+u+1);
                    }
                    if(n+u-i<=k)
                    {
                        g[u+1].push_back(n+i+1);
                        g[n+i+1].push_back(u+1);
                    }
                }
                mp[j].push_back(i);
                j=a[i]/j;
                if(mp[j].size()>0)
                {
                    ll u=mp[j].back();
                    if(i-u<=k)
                    {
                        g[u+1].push_back(i+1);
                        g[i+1].push_back(u+1);
                        g[n+u+1].push_back(n+i+1);
                        g[n+i+1].push_back(n+u+1);
                    }
                    if(n+u-i<=k)
                    {
                        g[u+1].push_back(n+i+1);
                        g[n+i+1].push_back(u+1);
                    }
                }
                mp[j].push_back(i);
                j=a[i]/j;
            }
        }
        // cout<<a[i]<<" j "<<i<<endl;
            mp[a[i]].push_back(i);
        
        // for(int j=0;j<mp[3].size();j++)cout<<mp[3][j]<<" ";
        // cout<<" yo "<<endl;
    
    }
    for(int i=0;i<g.size();i++)
    {
        for(int j=0;j<g[i].size();j++)cout<<g[i][j]<<" ";
        cout<<endl;
    }
    visited.assign(2*n+1,0);
    vector<int> cont;
    for(int i=1;i<=2*n;i++)
    {
        if(!visited[i])
        {
            // cout<<i<<endl;
            DFS(i);
            cont.push_back(i);
        }
    }
    cout<<cont.size()<<endl;
  }
  return 0;
}
// int visited[100100];
// vector<int> edge[100100];
// int DFS(int v)
// {
//     int ans=1;
//     visited[v]++;
//     for(int i : edge[v])
//     {
//         if(!visited[i])
//         {
//             ans+=DFS(i);
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     memset(visited, 0, sizeof(visited));
//     while(m--)
//     {
//         int p,q;
//         cin>>p>>q;
//         edge[p-1].push_back(q-1);
//     }
//     vector<int> cont;
//     for(int i=0;i<n;i++)
//     {
//         if(!visited[i])
//         {
//             cont.push_back(DFS(i));
//         }
//     }
//     int sum=0;
//     int ans=0;
//     for(int i=0;i<cont.size();i++)
//     {
//         ans+=sum*cont[i];
//         sum+=cont[i];
//     }
//     cout<<ans<<endl;
// }