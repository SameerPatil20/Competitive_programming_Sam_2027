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
#define mod 1000000007
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll l,r,k;
    cin>>l>>r>>k;
    if(k>=10)cout<<0<<endl;
    else{
        ll b=(9+k)/k;
        ll a=1;
        ll c=1;
        ll temp=b;
        while(r>0)
        {
            if(r%2)
            {a*=temp;
            a%=mod;
            }
            if(l%2)
            {c*=temp;
            c%=mod;
            }
            r=r/2;
            l=l/2;
            temp*=temp;
            temp%=mod;
        }
        // cout<<a<<" "<<c<<endl;
        cout<<(a-c+mod)%mod<<endl;
    }
  }
  return 0;
}