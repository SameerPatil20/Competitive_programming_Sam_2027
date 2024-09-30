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
#define F first
#define S second
using namespace std;
pair<pair<ll,ll>,ll> tree[400040];
ll a[100010];
void build(int node, int start, int end)
{
    if (start == end)
    {
      tree[node] = {{a[start],a[end]},0};
      return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    tree[node].F.F = max(tree[2 * node].F.F, tree[2 * node + 1].F.F);
    tree[node].F.S = min(tree[2 * node].F.S, tree[2 * node + 1].F.S);
    tree[node].S = 0;
  
}
void update(int node,int start,int end,int l, int r, int ch)
{
    // cout<<"yo"<<endl;
    if(tree[node].F.S>r || tree[node].F.F<l)
    {
        // cout<<"bo "<<l<<r<< " k " <<endl;
        return;
    }
    if(tree[node].F.S>=l && tree[node].F.F<=r)
    {
        // cout<<start<<" "<<end<<endl;
        tree[node].F.F += ch;
        tree[node].F.S += ch;
        tree[node].S += ch;
        return;
    }
    int mid = (start + end) / 2;
    tree[2*node].F.F+=tree[node].S;
    tree[2*node].F.S+=tree[node].S;
    tree[2*node+1].F.F+=tree[node].S;
    tree[2*node+1].F.S+=tree[node].S;
    tree[2*node].S+=tree[node].S;
    tree[2*node+1].S+=tree[node].S;
    update(2 * node, start, mid, l, r, ch);
    update(2 * node + 1, mid + 1, end, l, r, ch);
    tree[node].F.F = max(tree[2 * node].F.F, tree[2 * node + 1].F.F);
    tree[node].F.S = min(tree[2 * node].F.S, tree[2 * node + 1].F.S);
    tree[node].S = 0;
    
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll n,m;
    cin>>n>>m;
    ain(a,n);
    sort(a,a+n);
    build(1,0,n-1);
    rp(m)
    {
        char ty;ll l,r;
        cin>>ty>>l>>r;
        if(ty=='+')
        {
            update(1,0,n-1,l,r,1);
        }
        else
        {
            update(1,0,n-1,l,r,-1);
        }
        cout<<tree[1].F.F<<" ";
    }
    cout<<endl;
  }
  return 0;
}