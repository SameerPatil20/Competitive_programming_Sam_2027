#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define endl '\n'
using namespace std;
int n;
pair<int,int> a[100100];
int tree[400400];
void update(int node,int start,int end,int idx)
{
    if(idx<start || idx>end)return;
    if(start==end)
    {
        tree[node]=1;
        return;
    }
    int mid=(start+end)/2;
    update(2*node,start,mid,idx);
    update(2*node+1,mid+1,end,idx);
    tree[node]=tree[2*node]+tree[2*node+1];
}
int que(int node,int start,int end,int l,int r)
{
    if(r<start || l>end)
    {
        return 0;
    }
    if(l<=start && r>=end)return tree[node];
    int mid=(start+end)/2;
    return que(2*node,start,mid,l,r)+que(2*node+1,mid+1,end,l,r);
}
int main()
{
    cin>>n;
    rp(n)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a,a+n);
    int q;
    cin>>q;
    vector<vector<int>> query;
    rp(q)
    {
        int l,r,x;
        char w;
        cin>>w>>l>>r>>x;
        query.push_back({x,l,r,i});
    }
    sort(query.begin(),query.end());
    int ans[q];
    memset(tree,0,sizeof(tree));
    int done=0;
    rp(q)
    {
        int x=query[i][0];
        int l=query[i][1];
        int r=query[i][2];
        while(done<n && a[done].first<=x)
        {
            update(1,0,n-1,a[done].second);
            done++;
        }
        ans[query[i][3]]=que(1,0,n-1,l,r);
    }
    out(ans,q," ")
    cout<<endl;
}