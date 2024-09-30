#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int n;
int a[100100];
pair<int,int> tree[400400];
void build(int node,int l,int r)
{
    if(l==r)
    {
        tree[node]={a[l],1};
        return;
    }
    else{
        int mid=(l+r)/2;
        build(2*node,l,mid);
        build(2*node+1,mid+1,r);
        if(tree[2*node].first==tree[2*node+1].first)
        {
            tree[node]={tree[2*node].first,tree[2*node].second+tree[2*node+1].second};
        }
        else{
            if(tree[2*node].first>tree[2*node+1].first)tree[node]=tree[2*node+1];
            else tree[node]=tree[2*node];
        }
    }
}
void update(int node,int l,int r,int x,int v)
{
    if(x<l || x>r)return;
    if(l==r)
    {
        tree[node]={v,1};
        a[x]=v;
        return;
    }
    else{
        int mid=(l+r)/2;
        update(2*node,l,mid,x,v);
        update(2*node+1,mid+1,r,x,v);
        if(tree[2*node].first==tree[2*node+1].first)
        {
            tree[node]={tree[2*node].first,tree[2*node].second+tree[2*node+1].second};
        }
        else{
            if(tree[2*node].first>tree[2*node+1].first)tree[node]=tree[2*node+1];
            else tree[node]=tree[2*node];
        }
    }
}
pair<int,int> query(int node,int l,int r,int lq,int rq)
{
    if(lq>r || rq<l)return {__INT_MAX__,0};
    if(lq<=l && rq>=r)return tree[node];
    int mid=(l+r)/2;
    pair<int,int> p1=query(2*node,l,mid,lq,rq);
    pair<int,int> p2=query(2*node+1,mid+1,r,lq,rq);
    if(p1.first==p2.first)return {p1.first,p1.second+p2.second};
    else{
        if(p1.first>p2.first)return p2;
        else return p1;
    }
}
int main()
{
    cin>>n;   
    ain(a,n);
    build(1,0,n-1);
    int q;
    cin>>q;
    while(q--)
    {
        int ch;
        cin>>ch;
        if(ch==1)
        {
            int x,v;
            cin>>x>>v;
            update(1,0,n-1,x,v);
        }
        if(ch==2)
        {
            int l,r;
            cin>>l>>r;
            pair<int,int> p=query(1,0,n-1,l,r);
            cout<<p.first<<" "<<p.second<<endl;
        }
    }
}