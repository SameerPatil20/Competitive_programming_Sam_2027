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
    ll b,c,d;
    cin>>b>>c>>d;
    ll a=0;
    ll p=1;
    while(d>0 || b>0 || c>0)
    {
        ll u1=d%2;
        ll u2=c%2;
        ll u3=b%2;
        if(u1==0 && u2==0)
        {
            if(u3==1)
            {
                a=-1;
                break;
            }
        }
        else if(u1==0 && u2==1)
        {
            if(u3==1)
            {
                a+=p;
            }
        }
        else if(u1==1 && u2==0)
        {
            a+=p;
        }
        else
        {
            if(u3==0){
                a=-1;
                break;
            }
        }
        d>>=1;
        b>>=1;
        c>>=1;
        p<<=1;
    }
    cout<<a<<endl;
  }
  return 0;
}