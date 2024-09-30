#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
struct node{
    int maxi;
    int open;
    int close;
    node(char c='(')
    {
        maxi=0;
        open=(c=='(');
        close=1-open;
        if(c=='o')
        {
            open=0;
            close=0;
        }
    }
};
#define mid ((l+r)/2)
int n;
char a[100100];
node tree[400400];
node merge(node a, node b)
{
    node temp;
    int c=min(a.open,b.close);
    temp.maxi=a.maxi+b.maxi+c*2;
    temp.open=a.open+b.open-c;
    temp.close=a.close+b.close-c;
    return temp;
}
void build(int id,int l ,int r)
{
    if(l==r)
    {
        tree[id]=node(a[l]);
        return;
    }
    build(id<<1,l,mid);
    build(id<<1|1,mid+1,r);
    tree[id]=merge(tree[2*id],tree[2*id+1]);
}
node query(int id,int l, int r, int lq, int rq)
{
    if(l>rq || lq>r)
    { 
        return node('o');
    }
    if(lq<=l && r<=rq)
    {
        return tree[id];
    }
    return merge(query(2*id,l,mid,lq,rq),query(2*id+1,mid+1,r,lq,rq));
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
        int l,r;
        cin>>l>>r;
        cout<<query(1,0,n-1,l,r).maxi<<endl;
    }
}