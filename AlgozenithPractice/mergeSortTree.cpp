#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int n;
int a[100100];
vector<int> tree[400400];
vector<int> merge(vector<int> a,vector<int> b)
{
    int i=0,j=0;
    vector<int> ans;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else
        {
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size())
    {
        ans.push_back(a[i]);
        i++;
    }
    while(j<b.size())
    {
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}
void build(int node,int l,int r)
{
    if(l==r)
    {
        tree[node]={a[l]};
        return;
    }
    int mid=(l+r)/2;
    build(node*2,l,mid);
    build(node*2+1,mid+1,r);
    tree[node]=merge(tree[node*2],tree[node*2+1]);
}
int query(int node,int l,int r,int ql,int qr,int x)
{
    if(r<ql || qr<l)
    {
        return 0;
    }
    if(ql<=l && r<=qr)
    {
        return upper_bound(tree[node].begin(),tree[node].end(),x)-tree[node].begin();
    }
    int mid=(l+r)/2;
    return query(node*2,l,mid,ql,qr,x)+query(node*2+1,mid+1,r,ql,qr,x);
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
        int l,r,x;
        char w;
        cin>>w>>l>>r>>x;
        cout<<query(1,0,n-1,l,r,x)<<endl;
    }
}