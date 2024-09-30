#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int tree[500500];
void update(int index,int start,int end,int idx)
{
    if(idx<start || idx>end)return;
    if(start==end)
    {
        tree[index]=1-tree[index];
        return;
    }
    int mid=(start+end)/2;
    update(index*2,start,mid,idx);
    update(index*2+1,mid+1,end,idx);
    tree[index]=tree[2*index]+tree[2*index+1];
}
int query(int index,int start,int end,int k)
{
    if(start>k)return 0;
    if(k>=end)return tree[index];
    int mid=(start+end)/2;
    return query(2*index,start,mid,k)+query(2*index+1,mid+1,end,k);
}
int main()
{
    int n;
    cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a,a+n);
    int cc[n];
    for(int i=0;i<n;i++)
    {
        cc[a[i].second]=i;
    }
    memset(tree,0,sizeof(tree));
    int q;
    cin>>q;
    out(cc,n," ")
    cout<<endl;
    while(q--)
    {
        int ch;
        cin>>ch;
        if(ch==1)
        {
            int x;
            cin>>x;
            x=cc[x];
            update(1,0,n-1,x);
        }
        if(ch==2)
        {
            int k;
            cin>>k;
            auto it = upper_bound(a, a+n, k, [](const int& value, const pair<int, int>& element) {
                return value < element.first;
            });
            it--;
            if(it==a-1)
            {
                cout<<0<<endl;
                continue;
            }
            int index = it->second;
            k = cc[index];
            cout<<"k="<<k<<endl;
            cout<<query(1,0,n-1,k)<<endl;
        }
    }
}