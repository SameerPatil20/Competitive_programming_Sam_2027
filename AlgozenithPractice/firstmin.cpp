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
        // cout<<index<<" "<<a[l]<<endl;
        tree[index]=a[l];
        return;
    }
    int mid=(l+r)/2;
    build(index*2,l,mid);
    build(index*2+1,mid+1,r);
    tree[index]=max(tree[index*2],tree[index*2+1]);
}
int query(int index,int l, int r,int x)
{
    // cout<<index<<" "<<tree[index]<<" "<<tree[2*index]<<" "<<tree[2*index+1]<<endl;
    if(tree[index]<x)return 0;
    if(l==r)
    {
        tree[index]-=x;
        return l+1;
    }
    int mid=(l+r)/2;
    if(tree[2*index]>=x)
    {
        int y= query(2*index,l,mid,x);
        tree[index]=max(tree[2*index],tree[2*index+1]);
        return y;
    }
    else 
    {
        int y= query(2*index+1,mid+1,r,x);
        tree[index]=max(tree[2*index],tree[2*index+1]);
        return y;
    }
}
int main()
{
    cin>>n;
    int q;
    cin>>q;
    ain(a,n);
    build(1,0,n-1);
    while(q--)
    {
        int x;
        cin>>x;
        cout<<query(1,0,n-1,x)<<endl;
    }
}