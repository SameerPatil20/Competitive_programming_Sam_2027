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
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    v3(ll,x,y,z);
    ll k;
    cin>>k;
    ll ans=0;
    ll sq=sqrt(k);
    for(ll i=1;i<=min(x,sq);i++)
    {
        if(k%i)continue;
        ll u=k/i;
        ll bq=sqrt(u);
        for(ll j=1;j<=min(y,bq);j++)
        {
            if(u%j)continue;
            ll v=u/j;
            if(j<=y && v<=z)
            {
                // cout<<i<<" "<<j<<" "<<v<<" yo"<<endl;
            ans=max(ans,1LL*(x+1-i)*(y+1-j)*(z+1-v));}
            if(j==v)continue;
            swap(j,v);
            if(j<=y && v<=z)
            {
                // cout<<i<<" "<<j<<" "<<v<<" lo"<<endl;
            ans=max(ans,1LL*(x+1-i)*(y+1-j)*(z+1-v));}
            swap(j,v);
        }
        // if(u<=y)
        // {
        //     ans=max(ans,1LL*(x+1-i)*(y+1-u)*(z));
        //      cout<<i<<" "<<u<<" "<<1<<endl;
        // }
        if(u==i || u>x)continue;
        swap(u,i);
        bq=sqrt(u);
        for(ll j=1;j<=min(y,bq);j++)
        {
            if(u%j)continue;
            ll v=u/j;
            if(j<=y && v<=z)
            {
                // cout<<i<<" "<<j<<" "<<v<<" oo"<<endl;
            ans=max(ans,1LL*(x+1-i)*(y+1-j)*(z+1-v));}
            if(j==v)continue;
            swap(j,v);
            if(j<=y && v<=z)
            {
                // cout<<i<<" "<<j<<" "<<v<<" po"<<endl;
            ans=max(ans,1LL*(x+1-i)*(y+1-j)*(z+1-v));}
            swap(j,v);
        }
        // if(u<=y)
        // {
        //     ans=max(ans,1LL*(x+1-i)*(y+1-u)*(z));
        //      cout<<i<<" "<<u<<" "<<1<<endl;
        // }
        swap(u,i);

    }
    // if(k<=x)
    // {
    //     ans=max(ans,1LL*(x+1-k)*(y)*(z));
    //      cout<<k<<" "<<1<<" "<<1<<endl;
    // }
    cout<<ans<<endl;
  }
  return 0;
}