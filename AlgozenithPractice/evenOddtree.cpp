#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int n;
int a[100100];
int tree[400400];
void build(int index,int l, int r)
{
    if(l==r)
    {
        tree[index]=(a[l]%2);
        return;
    }
    int mid=(l+r)>>1;
    build(index<<1,l,mid);
    build(index<<1|1,mid+1,r);
    tree[index]=tree[2*index]+tree[index<<1|1];
}
void update(int index,int l, int r, int x, int y)
{
    if(l>x ||r<x)
    {
        return;
    }
    if(l==r)
    {
        tree[index]=y%2;
        return;
    }
    int mid=(l+r)>>1;
    update(index<<1,l,mid,x,y);
    update(index<<1|1,mid+1,r,x,y);
    tree[index]=tree[2*index]+tree[index<<1|1];
}
int query(int index,int l, int r, int lq,int rq)
{
    // cout<<index<<" "<<l<<" "<<r<<endl;
    if(rq<l ||r<lq)return 0;
    if(lq<=l && r<=rq)return tree[index];
    int mid=(l+r)/2;
    return query(2*index,l,mid,lq,rq)+query(2*index+1,mid+1,r,lq,rq);
}
int main()
{
    cin>>n;
    ain(a,n);
    build(1,0,n-1);
    // cout<<tree[1]<<endl;
    int q;
    cin>>q;
    while(q--)
    {
        int ch;
        cin>>ch;
        if(ch==0)
        {
            int x,y;
            cin>>x>>y;
            update(1,0,n-1,x,y);
        }
        else if(ch==1)
        {
            int l,r;
            cin>>l>>r;
            cout<<r+1-l-query(1,0,n-1,l,r)<<endl;
        }
        else if(ch==2)
        {
            int l,r;
            cin>>l>>r;
            cout<<query(1,0,n-1,l,r)<<endl;
        }
    }
}