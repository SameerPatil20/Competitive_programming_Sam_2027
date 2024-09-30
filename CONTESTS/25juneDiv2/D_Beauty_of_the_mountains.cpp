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
    v3(ll,n,m,k);
    ll diff=0;
    ll s[n+1][m+1];
    rp(n)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>s[i+1][j+1];
        }
    }
    
    int a[n+1][m+1];
    char x;
    rp(m+1)a[0][i]=0;
    for(ll i=1;i<=n;i++)
    {
        a[i][0]=0;
        for(ll j=1;j<=m;j++)
        {
            
            cin>>x;
            a[i][j]=x-'0';
            diff+=(1-2*a[i][j])*s[i][j];
        }
    }
    if(diff==0){cout<<"YES"<<endl;
    continue;}
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            a[i][j]+=a[i][j-1];
        }
    }
    vector<ll> v;
    for(ll i=1;i<=m;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            a[j][i]+=a[j-1][i];
        }
    }
    // for(ll i=1;i<=n;i++)
    // {
    //     for(ll j=1;j<=m;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    for(ll i=k;i<=n;i++)
    {
        for(ll j=k;j<=m;j++)
        {
            ll r=a[i][j]-a[i-k][j]-a[i][j-k]+a[i-k][j-k];
            // cout<<k*k-r*2<<endl;
            if(r*2!=k*k)v.push_back(abs(k*k-r*2));
        }
    }
    if(v.size()==0)
    {
        cout<<"NO"<<endl;
        continue;
    }
    // for(ll i=k-1;i<n;i++)
    // {
    //     for(ll j=k-1;j<m;j++)
    //     {
    //         cout<<a[i][j]<<endl;
    //     }
    // }
    ll gc=v[0];
    rp(v.size())
    {
        gc=gcd(gc,v[i]);
    }
    // cout<<"gc:"<<gc<<endl;
    diff=abs(diff);
    if(diff%gc==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}