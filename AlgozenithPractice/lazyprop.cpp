#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
#define mid ((l+r)>>2)
using namespace std;
struct node{
    int max;
    int sum;
    int lazyvalue;
    node(int ma=0, int su=0, int lazyvalu=-1)
    {
        max=ma;
        sum=su;
        lazyvalue=lazyvalu;
    }
};
int n;
int a[100100];
node tree[400400];
void build(int id,int l, int r)
{
    if(l==r)
    {
        tree[id]=node(a[l],a[l]);
        return;
    }
    build(id<<2,l,mid);
    build(id<<2|1,mid+1,r);
    tree[id].max=max(tree[id<<2].max,tree[id<<2|1].max);
    tree[id].sum=tree[id<<2].sum+tree[id<<2|1].sum;
    tree[id].lazyvalue=-1;
}
void update(int id,int l, int r, int lq, int rq, int v)
{
    if(lq>r || l>rq)return;
    if(l==r)
    {
        tree[id]=node(v,v);
        return;
    }
    if(lq<=l && rq>=r)
    {
        tree[id].max=v;
        tree[id].sum=v*(r-l+1);
        tree[id<<2].lazyvalue=v;
        tree[id<<2|1].lazyvalue=v;
        tree[id].lazyvalue=-1;
        return;
    }
    if(tree[id].lazyvalue!=-1)
    {
        tree[id<<2].lazyvalue=tree[id].lazyvalue;
        tree[id<<2|1].lazyvalue=tree[id].lazyvalue;
        tree[id].lazyvalue=-1;
    }
    update(id<<2,l,mid,lq,rq,v);
    update(id<<2|1,mid+1,r,lq,rq,v);
    tree[id].max=max(tree[id<<2].max,tree[id<<2|1].max);
    tree[id].sum=tree[id<<2].sum+tree[id<<2|1].sum;
}
int querySum(int id,int l, int r, int lq, int rq)
{
    if(lq>r || l>rq)return 0;
    if(tree[id].lazyvalue!=-1)
    {
        int v=tree[id].lazyvalue;
        tree[id].max=v;
        tree[id].sum=v*(r-l+1);
        tree[id<<2].lazyvalue=v;
        tree[id<<2|1].lazyvalue=v;
        tree[id].lazyvalue=-1;
    }
    if(lq<=l && r<=rq)
    {
        return tree[id].sum;
    }
    return querySum(id<<2,l,mid,lq,rq)+querySum(id<<2|1,mid+1,r,lq,rq);
}
int queryMax(int id,int l, int r, int lq, int rq)
{
    if(lq>r || l>rq)return 0;
    if(tree[id].lazyvalue!=-1)
    {
        int v=tree[id].lazyvalue;
        tree[id].max=v;
        tree[id].sum=v*(r-l+1);
        tree[id<<2].lazyvalue=v;
        tree[id<<2|1].lazyvalue=v;
        tree[id].lazyvalue=-1;
    }
    if(lq<=l && r<=rq)
    {
        return tree[id].max;
    }
    return max(queryMax(id<<2,l,mid,lq,rq),queryMax(id<<2|1,mid+1,r,lq,rq));
}
#undef mid
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
        if(ch==3)
        {
            int lq,rq,v;
            cin>>lq>>rq>>v;
            update(1,0,n-1,lq,rq,v);
        }
        else if(ch==1)
        {
            int lq,rq;
            cin>>lq>>rq;
            cout<<querySum(1,0,n-1,lq,rq)<<endl;
        }
        else if(ch==2)
        {
            int lq,rq;
            cin>>lq>>rq;
            cout<<queryMax(1,0,n-1,lq,rq)<<endl;
        }
        
    }
}