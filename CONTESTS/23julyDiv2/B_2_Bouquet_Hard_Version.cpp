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
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ain(a,n)
    ll c[n];
    ain(c,n)
    ll maxi=0;
    sort(a,a+n);
    rp(n)
    {
        ll z=m/a[i];
        remax(maxi,min(z,c[i])*a[i]);
    }
    rp(n-1)
    {
        if(a[i]==a[i+1]-1)
        {
            ll sum=a[i]*c[i];
            if(sum=<m)
            {
                ll z=(m-sum)/a[i+1];
                sum+=min(z,c[i+1])*a[i+1];
                remax(maxi,sum);
            }
            else
            {
                ll z=sum-m;
                if(z<=c[i+1])
                {
                    maxi=m;
                    break;
                }
            }
            ll sum=a[i+1]*c[i+1];
            
            
        }
    }
    cout<<maxi<<endl;
  }
  return 0;
}