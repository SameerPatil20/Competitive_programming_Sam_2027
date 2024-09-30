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
int ch[100100];
double dp[100100];
int dfs(int v)
{
    int ans=1;
    for(auto i:g[v])
    {
        ans+=dfs(i);
    }
    // ch[v].first=g[v].size();
    // ch[v]=ans;
    return ch[v]=ans;
}
void bdfs(int v)
{
    // dp[v]=dp[p]+1.0;
    // double sum=ch[p].second-1.0-ch[v].second;
    double k=g[v].size();
    if(k==0)return;
    // double fac=1.0/k;
    double sum=0.5;
    // cout<<k<<" "<<fac<<" "<<sum<<endl;
    // for(double x=1.0;x<k;x+=1.0)
    // {
    //     sum+=fac;
    //     fac*=(k-1.0-x)/((k-x)*x);
    //     // cout<<v<<" "<<sum<<endl;
    // }
    // sum=0.5;
    for(auto i:g[v])
    {
        dp[i]=dp[v]+1.0+sum*(1.0*ch[v]-1.0-1.0*ch[i]);
        bdfs(i);
    }
}
int main() {
    int n;
    cin>>n;
    g.resize(n+1);
    rp(n-1){
        int x;
        cin>>x;
        g[x].push_back(i+2);
    }
    dfs(1);
    dp[1]=1.0;
    bdfs(1);
    // cout<<ch[1].first<<endl;
    rp(n)
    {
        cout<<fixed<<setprecision(3)<<dp[i+1]<<" ";
    }
    cout<<endl;

}