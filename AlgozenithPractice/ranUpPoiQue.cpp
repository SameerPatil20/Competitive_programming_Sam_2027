#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int n;
int a[100100];
int tree[400400];
void build(int node,int start,int end)
{
    if(start==end)
    {
        tree[node]=a[start];
        return;
    }
    int mid=(start+end)/2;
    build(2*node,start,mid);
    build(2*node+1,mid+1,end);
    tree[node]=0;
}
void update(int node,int start,int end,int l,int r,int v)
{
    if(start>r || end<l)return;
    if(start>=l && end<=r)
    {
        tree[node]+=v;
        return;
    }
    int mid=(start+end)/2;
    update(2*node,start,mid,l,r,v);
    update(2*node+1,mid+1,end,l,r,v);
}
int query(int node,int start,int end,int x)
{
    if(x>end || x<start)return 0;
    if(start==end)return tree[node];
    int mid=(start+end)/2;
    return query(2*node,start,mid,x)+query(2*node+1,mid+1,end,x)+tree[node];
}
int main()
{
    cin>>n;
    ain(a,n)
    build(1,0,n-1);
    int q;
    cin>>q;
    while(q--)
    {
        int ch;
        cin>>ch;
        if(ch==1)
        {
            int l,r,v;
            cin>>l>>r>>v;
            update(1,0,n-1,l,r,v);
        }
        else{
            int x;
            cin>>x;
            cout<<query(1,0,n-1,x)<<endl;
        }
    }
}