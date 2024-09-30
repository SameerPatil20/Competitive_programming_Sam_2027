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
    ll hmin=1;
    ll hmax=__LONG_LONG_MAX__;
    int q;
    cin>>q;
    while(q--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            ll a,b,n;
            cin>>a>>b>>n;
            ll nmin=(a-b)*(n-1)+b+1;
            if(n==1)nmin=1;
            ll nmax=(a-b)*(n-1)+a;
            if(nmax<hmin || nmin>hmax)
            {
                cout<<0<<" ";
                continue;
            }
            hmin=max(hmin,nmin);
            hmax=min(hmax,nmax);
            cout<<1<<" ";
        }
        else
        {
            // cout<<hmin<<" "<<hmax<<endl;
            ll a,b;
            cin>>a>>b;
            // if(a>=hmin)
            // {
            //     cout<<1<<" ";
            //     continue;
            // }
            ll n1=(max(0LL,hmin-b-1))/(a-b)+1;
            ll n2=(max(hmax-b-1,0LL))/(a-b)+1;
            if(n1==n2)cout<<n2<<" ";
            else cout<<-1<<" ";
        }
    }
    cout<<endl;
  }
  return 0;
}