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
  while (TestCases--)
  {
    ll n,m,h;
    cin>>n>>m>>h;
    int ho[n+1];
    ll d1[n+1];
    ll dn[n+1];
    ll d1h[n+1];
    ll dnh[n+1];
    rp(n+1)
    {
        ho[i]=0;
        dn[i]=1e18;
        d1[i]=1e18;
        dnh[i]=1e18;
        d1h[i]=1e18;
    }
    rp(h)
    {
        int x;
        cin>>x;
        ho[x]++;
    }
    vector<vector<pair<ll,ll>>> g(n+1);
    rp(m)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        // int wu=w,wv=w;
        // if(a[u]>0)wu/=2;
        // if(a[v]>0)wv/=2;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    int a[n+1];
    int ah[n+1];
    rp(n+1)
    {
        a[i]=0;
        ah[i]=0;
    }
    d1[1]=0;
    d1h[1]=0;
    priority_queue<pair<pair<ll,ll>,bool>> pq;
    pq.push({{0,1},ho[1]});
    while(!pq.empty())
    {
        pair<int,int> fs=pq.top().first;
        bool horse=pq.top().second;
        pq.pop();
        // cout<<-fs.first<<" "<<fs.second<<" "<<horse<<endl;
        if(horse==0)
        {if(a[fs.second])continue;
        a[fs.second]=1;}
        else 
        {if(ah[fs.second])continue;
        ah[fs.second]=1;}
        for(auto v:g[fs.second]){
            
            ll neigh=v.first;
            ll wt=v.second;
            // cout<<"bo"<<horse<<wt<<endl;
            if(horse)wt/=2;
            if(!horse && (horse|ho[neigh])==0)
            {
            if(d1[neigh]>d1[fs.second]+wt){
                d1[neigh]=d1[fs.second]+wt;
                pq.push({{-d1[neigh],neigh},horse|ho[neigh]});
                continue;
            }
            }
            if(!horse && (horse|ho[neigh])==1)
            {
            if(d1h[neigh]>d1[fs.second]+wt){
                d1h[neigh]=d1[fs.second]+wt;
                pq.push({{-d1h[neigh],neigh},horse|ho[neigh]});
                continue;
            }
            }
            if(horse && (horse|ho[neigh])==0)
            {
            if(d1[neigh]>d1h[fs.second]+wt){
                d1[neigh]=d1h[fs.second]+wt;
                pq.push({{-d1[neigh],neigh},horse|ho[neigh]});
                continue;
            }
            }
            if(horse && (horse|ho[neigh])==1)
            {
            if(d1h[neigh]>d1h[fs.second]+wt){
                d1h[neigh]=d1h[fs.second]+wt;
                pq.push({{-d1h[neigh],neigh},horse|ho[neigh]});
                continue;
            }
            }
            if(ah[neigh]==0 && a[neigh]==1 && horse && ho[neigh]==0)
            {
                d1h[neigh]=d1h[fs.second]+wt;
                pq.push({{-d1h[neigh],neigh},horse|ho[neigh]});
                continue;
            }
        }
    }
    // cout<<"yo"<<endl;
    rp(n+1)
    {
        a[i]=0;
        ah[i]=0;
    }
    dn[n]=0;
    dnh[n]=0;
    pq.push({{0,n},ho[n]});
    while(!pq.empty())
    {
        pair<int,int> fs=pq.top().first;
        bool horse=pq.top().second;
        pq.pop();
        if(horse==0)
        {if(a[fs.second])continue;
        a[fs.second]=1;}
        else 
        {if(ah[fs.second])continue;
        ah[fs.second]=1;}
        for(auto v:g[fs.second]){
            ll neigh=v.first;
            ll wt=v.second;
            if(horse)wt/=2;
            if(!horse && (horse|ho[neigh])==0)
            {
            if(dn[neigh]>dn[fs.second]+wt){
                dn[neigh]=dn[fs.second]+wt;
                pq.push({{-dn[neigh],neigh},horse|ho[neigh]});
                continue;
            }
            }
            if(!horse && (horse|ho[neigh])==1)
            {
            if(dnh[neigh]>dn[fs.second]+wt){
                dnh[neigh]=dn[fs.second]+wt;
                pq.push({{-dnh[neigh],neigh},horse|ho[neigh]});
                continue;
            }
            }
            if(horse && (horse|ho[neigh])==0)
            {
            if(dn[neigh]>dnh[fs.second]+wt){
                dn[neigh]=dnh[fs.second]+wt;
                pq.push({{-dn[neigh],neigh},horse|ho[neigh]});
                continue;
            }
            }
            if(horse && (horse|ho[neigh])==1)
            {
            if(dnh[neigh]>dnh[fs.second]+wt){
                dnh[neigh]=dnh[fs.second]+wt;
                pq.push({{-dnh[neigh],neigh},horse|ho[neigh]});
                continue;
            }
            }
            if(ah[neigh]==0 && a[neigh]==1 && horse && ho[neigh]==0)
            {
                dnh[neigh]=dnh[fs.second]+wt;
                pq.push({{-dnh[neigh],neigh},horse|ho[neigh]});
                continue;
            }
        }
    }
    rp(n)
    {
        d1[i+1]=min(d1[i+1],d1h[i+1]);
        dn[i+1]=min(dn[i+1],dnh[i+1]);
    }
    ll answer=1e18;
    rp(n)
    {
        answer=min(answer,max(d1[i+1],dn[i+1]));
    }
    // out(d1,n+1," ");
    // cout<<endl;
    // out(d1h,n+1," ");
    // cout<<endl;
    if(answer==1e18)answer=-1;
    cout<<answer<<endl;


  }
  return 0;
}