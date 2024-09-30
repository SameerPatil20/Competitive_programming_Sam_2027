#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int tree[400400];
void update(int node,int l,int r, int x,int value)
{
    if(x>r || x<l)return;
    if(l==r)
    {
        tree[node]=value;
        return;
    }
    int mid=(l+r)>>1;
    update(2*node,l,mid,x,value);
    update(2*node+1,mid+1,r,x,value);
    tree[node]=min(tree[2*node],tree[2*node+1]);
}
int query(int node,int l,int r, int ql, int qr)
{
    if(ql>r || qr<l)return INT_MAX;
    if(ql<=l && qr>=r)return tree[node];
    int mid=(l+r) >> 1;
    return min(query(2*node,l,mid,ql,qr),query(2*node+1,mid+1,r,ql,qr));
}
int val(int node,int l,int r, int ql)
{
    if(ql>r || ql<l)return -1;
    if(l==r)return tree[node];
    int mid=(l+r) >> 1;
    return max(val(2*node,l,mid,ql),val(2*node+1,mid+1,r,ql));
}
int main()
{
    int n,c,d;
    cin>>n>>c>>d;
    vector<pair<int,pair<int,int>>> a;
    a.push_back({0,{0,c}});
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        a.push_back({x,{y,z}});
    }
    sort(a.begin(),a.end());
    int dp[d+1];
    for(int i=0;i<400400;i++)
    {
        tree[i]=INT_MAX;
    }
    update(1,0,d,d,0);
    // cout<<val(1,0,d,d)<<endl;
    for(int i=n;i>=0;i--)
    {
        // cout<<a[i].first<<" "<<a[i].second.first<<" "<<a[i].second.second<<endl;
        int y=query(1,0,d,a[i].first+1,a[i].first+a[i].second.second);
        if(y==INT_MAX)
        {
            dp[i]=-1;
            update(1,0,d,a[i].first,INT_MAX);
        }
        else {
            dp[i]=y+a[i].second.first;
        update(1,0,d,a[i].first,dp[i]);
        }
    }
    // out(dp,n+1," ")
    // cout<<endl;
    cout<<dp[0]<<endl;
    return 0;
}