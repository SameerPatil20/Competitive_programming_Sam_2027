#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int n;
int a[100100];
pair<int,bool> tree[400400];
void build(int node,int l,int r)
{
    if(l==r)
    {
        tree[node].first=a[l];
        tree[node].second=(a[l]==1);
        return;
    }
    int mid=(l+r)/2;
    build(node*2,l,mid);
    build(node*2+1,mid+1,r);
    tree[node].first=tree[node*2].first+tree[node*2+1].first;
    tree[node].second=tree[node*2].second&&tree[node*2+1].second;
}
int query(int node, int l, int r, int lq, int rq)
{
    if(r<lq || rq<l)return 0;
    if(lq<=l && r<=rq)return tree[node].first;
    if(tree[node].second==1)return 1*(1+min(rq,r)-max(lq,l));
    int mid=(l+r)/2;
    return query(node*2,l,mid,lq,rq)+query(node*2+1,mid+1,r,lq,rq);
}
void update(int node, int l, int r, int lq, int rq)
{
    if(r<lq || rq<l)return;
    if(tree[node].second==1)
    {
        return;
    }
    if(l==r)
    {
        tree[node].first=sqrt(tree[node].first);
        tree[node].second=(tree[node].first==1);
        return;
    }
    int mid=(l+r)/2;
    update(node*2,l,mid,lq,rq);
    update(node*2+1,mid+1,r,lq,rq);
    tree[node].first=tree[node*2].first+tree[node*2+1].first;
    tree[node].second=tree[node*2].second&&tree[node*2+1].second;
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
        char ch;
        cin>>ch;
        if(ch=='?')
        {
            int l,r;
            cin>>l>>r;
            cout<<query(1,0,n-1,l,r)<<endl;
        }
        else if(ch=='1')
        {
            int l,r;
            cin>>l>>r;
            update(1,0,n-1,l,r);
        }
    }
}