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
int a[100100];
pair<bool,int> tree[400400];
void build(int node, int l, int r) 
{
    if(l==r)
    {
        tree[node].second=a[l];
        tree[node].first=(a[l]==1);
        return;
    }
    int mid=(l+r)>>1;
    build(2*node,l,mid);
    build(2*node+1,mid+1,r);
    tree[node].first=(tree[2*node].first || tree[2*node+1].first);
    tree[node].second=tree[2*node].second + tree[2*node+1].second;
}
void update(int node,int l, int r, int id, int val)
{
    if(l>id || r<id) return;
    if(l==r)
    {
        tree[node].second=val;
        tree[node].first=(val==1);
        return;
    }
    int mid=(l+r)>>1;
    update(2*node,l,mid,id,val);
    update(2*node+1,mid+1,r,id,val);
    tree[node].first=(tree[2*node].first || tree[2*node+1].first);
    tree[node].second=tree[2*node].second + tree[2*node+1].second;
}
int lsum(int node,int l,int r)
{
    // if(l==r && tree[node].first==1)
    // {
    //     return a[l];
    // }
    if(l==r)
    {
        return 0;
    }
    if(tree[2*node].first==0 && tree[2*node+1].first==0)return 0;
    int mid=(l+r)>>1;
    if(tree[2*node+1].first==1)
    {
        return tree[2*node].second+lsum(2*node+1,mid+1,r);
    }
    else return lsum(2*node,l,mid);
}
int rsum(int node,int l,int r)
{
    // if(l==r && tree[node].first==1)
    // {
    //     return a[l];
    // }
    if(l==r)
    {
        return 0;
    }
    if(tree[2*node].first==0 && tree[2*node+1].first==0)return 0;
    int mid=(l+r)>>1;
    if(tree[2*node].first==1)
    {
        return tree[2*node+1].second+rsum(2*node,l,mid);
    }
    else return rsum(2*node+1,mid+1,r);
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n,q;
    cin>>n>>q;
    rp(n)
    {
        cin>>a[i];
    }
    build(1, 0, n-1);
    while(q--)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            int s;
            cin>>s;
            int c=max(lsum(1,0,n-1),rsum(1,0,n-1));
            // cout<<c<<endl;
            if(s>tree[1].second)
            {
                cout<<"NO"<<endl;
            }
            else if((tree[1].second-s)%2==0)
            {
                cout<<"YES"<<endl;
            }
            else if(tree[1].first==0)
            {
                cout<<"NO"<<endl;
            }
            else if(s<=c)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            int i,v;
            cin>>i>>v;
            update(1,0,n-1,i-1,v);
        }
    }
  }
  return 0;
}