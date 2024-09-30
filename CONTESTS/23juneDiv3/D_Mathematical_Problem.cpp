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
    int n;
    cin>>n;
    int a[n];
    rp(n)
    {
        char c;
        cin>>c;
        a[i]=c-'0';
    }
    ll ansi=INT_MAX;
    for(int j=0;j<n-1;j++)
    {
        ll ans=0;
        rp(n)
        {
            if(i==j)
            {
                ll x=10*a[i]+a[i+1];
                if(i!=0 && x==1)ans*=1LL;
                else if(ans==1)ans*=x;
                else ans+=x;
                i++;
            }
            else if(a[i]==0)
            {
                // cout<<i<<endl;
                ans=0;
                break;
            }
            else if(a[i]!=1)
            {
                ans+=a[i];
            }
            else if(i==0)ans=1LL;
        }
        ansi=min(ans,ansi);
        if(ansi==0)break;
    }
    cout<<ansi<<endl;
  }
  return 0;
}