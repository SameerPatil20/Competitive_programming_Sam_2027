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
vector<vector<ll>> tree;
vector<ll> score;
string s;
int yop,fix;
ll orig=-1;
void dfs(ll v,ll p)
{
    if(p!=0 && s[p-1]=='1' && s[v-1]=='0')
    {
        score[v]=score[p]+1;
    }
    if(p!=0 && s[p-1]=='0' && s[v-1]=='1')
    {
        score[v]=score[p]-1;
    }
    int counter=0;
    for(auto u:tree[v])
    {
        if(u!=p && u!=orig)
        {
            if(s[v-1]=='?' && p!=0)s[v-1]=s[p-1];
            dfs(u,v);
            counter++;
        }
    }
    if(counter==0 && s[v-1]=='?')
    {
        yop++;
    }
    if(counter==0 && s[v-1]!='?' && score[v]!=0)
    {
        // cout<<v<<endl;
        fix++;
    }
}
void solve(ll v,ll p,int k)
{
    int a0=0,a1=0;
    for(auto u:tree[v])
    {
        if(s[u]=='0')
        {
            orig=p;
            dfs(u,0);
            a0+=fix+(yop+1)/2;
            fix=0;yop=0;
            orig=-1;
        }
        if(s[u]=='1')
        {
            orig=p;
            dfs(u,0);
            a1+=fix+(yop+1)/2;
            fix=0;yop=0;
            orig=-1;
        }
        if(s[u]=='?')
        {
            solve(u,v,1);
            
        }
    }
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll n;
    cin >> n;
    tree.resize(n+1);
    score.assign(n+1,0);
    rp(n-1)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    cin>>s;
    yop=0;fix=0;
    if(s[0]=='?')
    {
        solve(1,0,0);
        int maxi=0;
        // s[0]='0';
        // dfs(1,0);
        // maxi=fix+yop/2;
        // cout<<fix<<endl;
        // yop=0;fix=0;
        // s[0]='1';
        // score.assign(n+1,0);
        // dfs(1,0);
        // // cout<<yop<<endl;
        // maxi=max(maxi,fix+yop/2);
        // yop=0;fix=0;
        // cout<<maxi<<endl;
        // continue;
    }
    dfs(1,0);
    cout<<fix+(yop+1)/2<<endl;
  }
  return 0;
}