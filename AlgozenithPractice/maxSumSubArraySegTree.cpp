#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int n;
int a[100100];
struct node{
    int msum;
    int rsum;
    int lsum;
    int tsum;
    node(int a=0)
    {
        if(a>=0)msum=lsum=rsum=tsum=a;
        else
        {
            msum=lsum=rsum=0;
            tsum=a;
        }
    }
};
node merge(node a, node b)
{
    node free=node(0);
    free.msum=max(a.rsum+b.lsum,max(a.msum,b.msum));
    free.lsum=max(a.lsum,a.tsum+b.lsum);
    free.rsum=max(b.rsum,b.tsum+a.rsum);
    free.tsum=a.tsum+b.tsum;
    return free;
}
node tree[400400];
void build(int index,int l,int r)
{
    if(l==r)tree[index]=node(a[l]);
    else{
        int mid=(l+r)/2;
        build(2*index,l,mid);
        build(2*index+1,mid+1,r);
        tree[index]=merge(tree[2*index],tree[2*index+1]);
    }
}
void update(int index,int l,int r,int x,int v)
{
    if(l>x || r<x)return;
    if(l==r)
    {
        tree[index]=node(v);
        return;
    }
    int mid=(l+r)/2;
    update(2*index,l,mid,x,v);
    update(2*index+1,mid+1,r,x,v);
    tree[index]=merge(tree[2*index],tree[2*index+1]);

}
node query(int index,int l,int r,int x,int y)
{
    if(l>y || r<x)
    {
        node f(0);
        f.msum=f.lsum=f.rsum=f.tsum=INT_MIN;
        return f;
    }
    if(l>=x && r<=y)return tree[index];
    int mid=(l+r)/2;
    node a=query(2*index,l,mid,x,y);
    node b=query(2*index+1,mid+1,r,x,y);
    return merge(a,b);
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
            int x,v;
            cin>>x>>v;
            update(1,0,n-1,x,v);
        }
        if(ch==2)
        {
            int l,r;
            cin>>l>>r;
            cout<<query(1,0,n-1,l,r).msum<<endl;
        }
    }
}