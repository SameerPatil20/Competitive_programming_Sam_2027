// #include<bits/stdc++.h>
// #define rp(n) for(decltype(n) i=0;i<n;i++)
// #define rp2(n,j) for(decltype(n) j=0;j<n;j++)
// #define ll long long int
// #define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
// #define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
// #define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
// #define v1(type,x) type x;cin>>x;
// #define v2(type,x,y) type x,y;cin>>x>>y;
// #define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
// #define remax(maxo,new) maxo=max(maxo,new);
// #define endl '\n'
// using namespace std;
// vector<vector<int>> g;
// int main() {
//   int TestCases;
//   cin >> TestCases;
//   while (TestCases--)
//   {
//     int n,Q;
//     cin>>n>>Q;
//     g.resize(n+5);
//     for(int i=1;i<=n;i++)
//     {
//         char u;
//         cin>>u;
//         if(u=='B')
//         {
//             g[i].push_back(n+1);
//             g[n+1].push_back(i);
//         }
//         if(u=='R')
//         {
//             g[i].push_back(n+2);
//             g[n+2].push_back(i);
//         }
//         if(u=='G')
//         {
//             g[i].push_back(n+3);
//             g[n+3].push_back(i);
//         }
//         if(u=='Y')
//         {
//             g[i].push_back(n+4);
//             g[n+4].push_back(i);
//         }
//         cin>>u;
//         if(u=='B')
//         {
//             g[i].push_back(n+1);
//             g[n+1].push_back(i);
//         }
//         if(u=='R')
//         {
//             g[i].push_back(n+2);
//             g[n+2].push_back(i);
//         }
//         if(u=='G')
//         {
//             g[i].push_back(n+3);
//             g[n+3].push_back(i);
//         }
//         if(u=='Y')
//         {
//             g[i].push_back(n+4);
//             g[n+4].push_back(i);
//         }
//     }
//     int dist[4][n+5];
//     rp(n+5)
//     {
//         for(int j=1;j<=4;j++) dist[j][i]=-1;
//     }
//     queue<int> q;
//     for(int i=1;i<=4;i++)
//     {
//         q.push(n+i);
//         dist[i][n+i]=0;
//         while(!q.empty())
//         {
//             int top=q.front();
//             q.pop();
//             for(int u:g[top])
//             {
//                 if(dist[i][u]==-1)
//                 {
//                     dist[i][u]=dist[i][top]+1;
//                     q.push(u);
//                 }
//             }
//         }
//     }
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=n+4;j++)
//         {
//             cout<<dist[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     while(Q--)
//     {
//         int a,b;
//         cin>>a>>b;
//         int ans=INT_MAX;
//         for(int i=1;i<=4;i++)
//         {
//             if(dist[i][a]!=-1 && dist[i][b]!=-1)
//             ans=min(ans,dist[i][a]+dist[i][b]);
//         }
//         if(ans==INT_MAX)cout<<-1<<endl;
//         else cout<<ans/2<<endl;
//     }

//   }
//   return 0;
// }
#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define endl '\n'
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n,Q;
    cin>>n>>Q;
    string s[n+1];
    vector<int> a[4];
    int b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        sort(s[i].begin(),s[i].end());
        int x=0;
        if(s[i][0]=='B')
        {
            x^=0;
        }
        if(s[i][0]=='R')
        {
            x^=1;
        }
        if(s[i][0]=='G')
        {
            x^=2;
        }
        if(s[i][0]=='Y')
        {
            x^=3;
        }
        if(s[i][1]=='B')
        {
           x^=0;
        }
        if(s[i][1]=='R')
        {
            x^=1;
        }
        if(s[i][1]=='G')
        {
            x^=2;
        }
        if(s[i][1]=='Y')
        {
            x^=3;
        }
        b[i]=x;
        for(int j=1;j<=3;j++)
        {
            a[j].push_back(i);
        }
        a[x].pop_back();
    }
    for(int j=1;j<=3;j++)
    {
        sort(a[j].begin(), a[j].end());
    }
    // for(int i=0;i<a[3].size();i++)
    // {
    //     cout<<a[3][i]<<" ";
    // }
    // cout<<endl;
    
    while(Q--)
    {
        int st,e;
        cin>>st>>e;
        // cout<<(b[st]^b[e])<<endl;
        // cout<<s[st]<<" "<<s[e]<<endl;
        if(((b[st]^b[e])!=0) || s[st].compare(s[e])==0)
        {
            cout<<abs(st-e)<<endl;
        }
        else{
            int u=b[st];
            // cout<<a[u].size()<<endl;
            if(a[u].size()==0)
            {
                cout<<-1<<endl;
                continue;
            }
            auto k=lower_bound(a[u].begin(), a[u].end(),min(st,e));
            auto l=lower_bound(a[u].begin(), a[u].end(),max(st,e));
            // cout<<*k<<endl;
            if(k==a[u].begin())
            {
                cout<<abs(*k-st)+abs(*k-e)<<endl;
            }
            else if(k==a[u].end())
            {
                cout<<abs(*(k-1)-st)+abs(*(k-1)-e)<<endl;
            }
            else{
                cout<<min(abs(*k-st)+abs(*k-e),abs(*(k-1)-st)+abs(*(k-1)-e))<<endl;
            }
        }
    }
  }
  return 0;
}