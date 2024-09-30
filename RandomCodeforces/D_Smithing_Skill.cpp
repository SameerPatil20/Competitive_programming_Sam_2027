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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    pair<int,int> a[n];
    rp(n)
    {
        cin>>a[i].first;
    }
    rp(n)
    {
        cin>>a[i].second;
    }
    sort(a,a+n);
    vector<pair<int,int>> weopons;
    weopons.push_back({a[0].first,a[0].first-a[0].second});
    for(int i=1;i<n;i++)
    {
        if(a[i].first-a[i].second<weopons.back().second)
        {
            weopons.push_back({a[i].first,a[i].first-a[i].second});
        }
    }
    int y=weopons.back().first;
    int x=weopons.back().second;
    int dp[y];
    dp[0]=0;
    int ptr=0;
    int wsize=weopons.size();
    for(int i=1;i<y;i++)
    {
        while(ptr!=wsize && i>=weopons[ptr].first)ptr++;
        if(ptr==0)dp[i]=dp[i-1];
        else 
        {
            dp[i]=dp[i-weopons[ptr-1].second]+2;
        }
    }
    // rp(weopons.size())
    // {
    //     cout<<weopons[i].first<<" "<<weopons[i].second<<endl;
    // }
    // out(dp,y," ")
    // cout<<endl;
    ll c[m];
    ll ans=0;
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
        if(c[i]>=y)
        {
            int use=((c[i]-y)/x)+1;
            ans+=2*use;
            c[i]-=use*x;
        }
        ans+=dp[c[i]];
    }
    cout<<ans<<endl;

}