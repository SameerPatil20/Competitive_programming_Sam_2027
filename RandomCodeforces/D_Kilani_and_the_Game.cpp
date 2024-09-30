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
// int main() {
  
//     ll n,m,p;
//     cin>>n>>m>>p;
//     ll steps[p];
//     ain(steps,p);
//     char ground[n][m];
//     queue<pair<ll,ll>> q[p];
//     ll dist[p][n][m];
//     ll mini[n][m];
//     for(ll i=0;i<n;i++)
//     {
//         for(ll j=0;j<m;j++)
//         {
//             cin>>ground[i][j];
//             for(ll k=0;k<p;k++)
//             {
//                 dist[k][i][j]=INT_MAX;
//             }
//             mini[i][j]=-1;
//             if(ground[i][j]!='.' && ground[i][j]!='#')
//             {
//                 ll k=ground[i][j]-'1';
//                 q[k].push({i,j});
//                 dist[k][i][j]=0;
//             }
//         }
//     }
//     for(ll i=0;i<p;i++)
//     {
//         while(!q[i].empty())
//         {
//             ll x=q[i].front().first;
//             ll y=q[i].front().second;
//             q[i].pop();
//             if(x>0 && ground[x-1][y]=='.' && dist[i][x-1][y]==INT_MAX)
//             {
//                 dist[i][x-1][y]=dist[i][x][y]+1;
//                 // if((steps[i]+dist[i][x-1][y]-1LL)/steps[i]>=mini[x-1][y])
//                 // {
//                 //     dist[i][x-1][y]=INT_MAX;
//                 // }
//                 q[i].push({x-1,y});
//             }
//             if(x<n-1 && ground[x+1][y]=='.' && dist[i][x+1][y]==INT_MAX)
//             {
//                 dist[i][x+1][y]=dist[i][x][y]+1;
//                 // if((steps[i]+dist[i][x+1][y]-1LL)/steps[i]>=mini[x+1][y])
//                 // {
//                 //     dist[i][x+1][y]=INT_MAX;
//                 // }
//                 q[i].push({x+1,y});
//             }
//             if(y>0 && ground[x][y-1]=='.' && dist[i][x][y-1]==INT_MAX)
//             {
//                 dist[i][x][y-1]=dist[i][x][y]+1;
//                 // if((steps[i]+dist[i][x][y-1]-1LL)/steps[i]>=mini[x][y-1])
//                 // {
//                 //     dist[i][x][y-1]=INT_MAX;
//                 // }
//                 q[i].push({x,y-1});
//             }
//             if(y<m-1 && ground[x][y+1]=='.' && dist[i][x][y+1]==INT_MAX)
//             {
//                 dist[i][x][y+1]=dist[i][x][y]+1;
//                 // if((steps[i]+dist[i][x][y+1]-1LL)/steps[i]>=mini[x][y+1])
//                 // {
//                 //     dist[i][x][y+1]=INT_MAX;
//                 // }
//                 q[i].push({x,y+1});
//             }
//         }
//         for(int j=0;j<n;j++)
//         {
//             for(int k=0;k<m;k++)
//             {
//                 if(dist[i][j][k]!=INT_MAX)
//                 {
//                     dist[i][j][k]=(steps[i]+dist[i][j][k]-1LL)/steps[i];
//                 }
//                 if(mini[j][k]==-1 && dist[i][j][k]!=INT_MAX)mini[j][k]=i;
//                 else if(mini[j][k]!=-1)
//                 {
//                     if(dist[i][j][k]<dist[mini[j][k]][j][k])mini[j][k]=i;
//                 }
//             }
//         }
//         // for(int j=0;j<n;j++)
//         // {
//         //     for(int k=0;k<m;k++)
//         //     {
//         //         cout<<mini[j][k]<<" ";
//         //     }
//         //     cout<<endl;
//         // }
//         // cout<<endl;
//     }



//     // rp(p)
//     // {
//     //     for(int k=0;k<n;k++)
//     //     {
//     //         for(int j=0;j<m;j++)
//     //         {
//     //             cout<<dist[i][k][j]<<" ";
//     //         }
//     //         cout<<endl;
//     //     }
//     //     cout<<endl;
//     // }
//     ll count[p];
//     set(count,p,0);
//     for(ll i=0;i<n;i++)
//     {
//         for(ll j=0;j<m;j++)
//         {
            
//             if(ground[i][j]!='.' && ground[i][j]!='#')
//             {
//                 ll k=ground[i][j]-'1';
//                 q[k].push({i,j});
//                 count[k]++;
//                 // dist[k][i][j]=0;
//             }
//         }
//     }
//     // cout<<q[0].size()<<endl;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<mini[i][j]<<" ";

//         }
//         cout<<endl;
//     }
//     for(ll i=0;i<p;i++)
//     {
//         while(!q[i].empty())
//         {
//             ll x=q[i].front().first;
//             ll y=q[i].front().second;
//             q[i].pop();
//             if(x>0 && ground[x-1][y]=='.' && i<=mini[x-1][y])
//             {
//                 count[i]++;
//                 q[i].push({x-1,y});
//                 ground[x-1][y]='#';
//             }
//             if(x<n-1 && ground[x+1][y]=='.' && i<=mini[x+1][y])
//             {
//                 count[i]++;
//                 q[i].push({x+1,y});
//                 ground[x+1][y]='#';
//             }
//             if(y>0 && ground[x][y-1]=='.' && i<=mini[x][y-1])
//             {
//                 count[i]++;
//                 q[i].push({x,y-1});
//                 ground[x][y-1]='#';
//             }
//             if(y<m-1 && ground[x][y+1]=='.' && i<=mini[x][y+1])
//             {
//                 count[i]++;
//                 q[i].push({x,y+1});
//                 ground[x][y+1]='#';
//             }
//         }
//     }





//     // for(ll i=0;i<n;i++)
//     // {
//     //     for(ll j=0;j<m;j++)
//     //     {
//     //         if(ground[i][j]!='#')
//     //         {
//     //             ll t=0;
//     //             for(int k=0;k<p;k++)
//     //             {
//     //                 // cout<<(steps[k]+dist[k][i][j]-1LL)/steps[k]<<" "<<(steps[t]+dist[t][i][j]-1LL)/steps[t]<<" ";
//     //                 if(dist[k][i][j]<dist[t][i][j])
//     //                 {
//     //                     t=k;
//     //                 }
//     //             }
//     //             // cout<<t<<" ";
//     //             if(dist[t][i][j]!=INT_MAX)
//     //             {
//     //                 count[t]++;
//     //                 cout<<i<<" "<<j<<" "<<t<<endl;
//     //             }
//     //         }
//     //         // else cout<<"  ";
//     //     }
//     //     // cout<<endl;
//     // }
//     // // cout<<(steps[0]+dist[0][0][0]-1LL)/steps[0]<<" "<<(steps[1]+dist[1][0][0]-1LL)/steps[1]<<endl;
//     out(count,p," ");
//     cout<<endl;
  
  
//   return 0;
// }
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
    ll n,m,p;
    cin>>n>>m>>p;
    ll steps[p+1];
    ll count[p+1];
    for(int i=1;i<=p;i++)
    {
        cin>>steps[i];
        count[i]=0;
    }
    char ground[n][m];
    ll dist[n][m];
    vector<pair<int,pair<int,int>>> v;
    queue<pair<ll,ll>> q;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>ground[i][j];
            dist[i][j]=INT_MAX;
            if(ground[i][j]!='.' && ground[i][j]!='#')
            {
                ll k=ground[i][j]-'0';
                count[k]++;
                v.push_back({k,{i,j}});
                dist[i][j]=0;
            }
        }
    }
    pair<int,int> par[n][m];
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++)
    {
        ll x=v[i].second.first;
        ll y=v[i].second.second;
        q.push({x,y});
    }
    // cout<<q.size()<<endl;
    queue<pair<int,int>> temp;
    while(!q.empty())
    {
        ll x=q.front().first;
        ll y=q.front().second;
        // cout<<x<<" "<<y<<" "<<q.size()<<endl;
        q.pop();
        int type=ground[x][y]-'0';
        // cout<<"yo"<<endl;
        temp.push({x,y});
        par[x][y]={x,y};
        while(!q.empty() && int(ground[q.front().first][q.front().second]-'0')==type)
        {
            temp.push({q.front().first,q.front().second});
            par[q.front().first][q.front().second]={q.front().first,q.front().second};
            q.pop();
        }
        // cout<<temp.size()<<" check "<<q.size()<<endl;
        while(!temp.empty())
        {
            int tx=temp.front().first;
            int ty=temp.front().second;
            // cout<<"temp "<<tx<<" "<<ty<<endl;
            temp.pop();
            // cout<<"parent "<<dist[par[tx][ty].first][par[tx][ty].second]<<" "<<dist[tx][ty]<<endl;
            if(dist[par[tx][ty].first][par[tx][ty].second]+steps[type]==dist[tx][ty])
            {
                // cout<<tx<<" "<<ty<<endl;
                q.push({tx,ty});
                continue;
            }
            if(tx>0 && ground[tx-1][ty]=='.')
            {
                // if(dist[tx-1][ty]!=INT_MAX)count[type]--;
                dist[tx-1][ty]=1+dist[tx][ty];
                par[tx-1][ty]=par[tx][ty];
                temp.push({tx-1,ty});
                ground[tx-1][ty]='0'+type;
                count[type]++;
            }
            if(tx<n-1 && ground[tx+1][ty]=='.')
            {
                // if(dist[tx+1][ty]!=INT_MAX)count[type]--;
                dist[tx+1][ty]=1+dist[tx][ty];
                par[tx+1][ty]=par[tx][ty];
                temp.push({tx+1,ty});
                ground[tx+1][ty]='0'+type;
                count[type]++;
            }
            if(ty<m-1 && ground[tx][ty+1]=='.')
            {
                // if(dist[tx][ty+1]!=INT_MAX)count[type]--;
                dist[tx][ty+1]=1+dist[tx][ty];
                par[tx][ty+1]=par[tx][ty];
                temp.push({tx,ty+1});
                ground[tx][ty+1]='0'+type;
                count[type]++;
            }
            if(ty>0 && ground[tx][ty-1]=='.')
            {
                // if(dist[tx][ty-1]!=INT_MAX)count[type]--;
                dist[tx][ty-1]=1+dist[tx][ty];
                par[tx][ty-1]=par[tx][ty];
                temp.push({tx,ty-1});
                ground[tx][ty-1]='0'+type;
                count[type]++;
            }

            
        }  
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<ground[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=p;i++)
    {
        cout<<count[i]<<" ";
    }
    cout<<endl;

}
