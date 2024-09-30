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
    ll n;cin>>n;
    ll a[n];
    ain(a,n);
    ll sum=a[0];
    ll carry=0;
    for(int i=1;i<n;i++)
    {
        ll a1=sum;
        ll a2=a[i];
        ll c=0;
        while(a1>0 || a2>0)
        {
            ll d1=a1%10;
            ll d2=a2%10;
            if(d1+d2+c>=10)
            {
                carry++;
                c=1;
            }
            else
            {c=0;}
            a1/=10;
            a2/=10;
        }
        sum+=a[i];

    }
    cout<<carry<<endl;
  }
  return 0;
}