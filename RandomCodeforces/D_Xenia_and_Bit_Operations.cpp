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
int n,q;
int a[150000];
int tree[600000];
void build(int id,int l,int r)
{
    if(l==r)
    {
        tree[id]=a[l];
        return;
    }
    int mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    if(int(log2(r+1-l))%2==1)
    tree[id]=tree[id*2]|tree[id*2+1];
    else tree[id]=tree[id*2]^tree[id*2+1];
}
void query(int id,int l,int r,int p,int b)
{
    if(p>r || p<l) return ;
    if(l==r)
    {
        tree[id]=b;
        return;
    }
    int mid=(l+r)/2;
    query(id*2,l,mid,p,b);
    query(id*2+1,mid+1,r,p,b);
    if(int(log2(r+1-l))%2==1)
    tree[id]=tree[id*2]|tree[id*2+1];
    else tree[id]=tree[id*2]^tree[id*2+1];
}
int main() {
    cin>>n>>q;
    n=1<<n;
    ain(a,n);
    build(1,0,n-1);
    // out(tree,9," ")
    // cout<<endl;
    while(q--)
    {
        int p,b;
        cin>>p>>b;
        query(1,0,n-1,p-1,b);
        // out(tree,9," ")
        // cout<<endl;
        cout<<tree[1]<<endl;
    }
    return 0;
}