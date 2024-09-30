#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
char ch;
int tree[500500];
void update(int index,int l,int r,int x)
{
    if(x<l || x>r)return;
    if(l==r)
    {
        if(ch=='+')tree[index]=1;
        if(ch=='-')tree[index]=0;
        return;
    }
    int mid=(l+r)/2;
    update(2*index,l,mid,x);
    update(2*index+1,mid+1,r,x);
    tree[index]=tree[2*index]+tree[2*index+1];
}
int query(int index,int l, int r,int k)
{
    // cout<<"query"<<"  "<<index<<" "<<l<<" "<<r<<" "<<k<<" "<<tree[index]<<" "<<tree[2*index]<<endl;
    if(tree[index]<k)return -1;
    if(l==r && k==1)return l;
    int mid=(l+r)/2;
    if(tree[2*index]>=k)
    {
        return query(2*index,l,mid,k);
    }
    else{
        return query(2*index+1,mid+1,r,k-tree[2*index]);
    }
}
int main()
{
    memset(tree,0,sizeof(tree));
    int q;
    cin>>q;
    while(q--)
    {
        cin>>ch;
        if(ch=='?')
        {
            // cout<<"Check"<<" "<<q<<endl;
            // cout<<tree[1]<<" "<<tree[2]<<" "<<tree[3]<<endl;
            int k;
            cin>>k;
            cout<<query(1,0,100000,k)<<endl;
        }
        else if(ch=='+' || ch=='-')
        {
            // cout<<"update"<<" "<<q<<endl;
            int x;
            cin>>x;
            update(1,0,100000,x);
        }
    }
}