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
    cin>> n;
    ll a[n];
    ain(a,n);
    ll sum=0;
    ll sway=1;
    ll ansy=0;
    ll ans=0;
    rp(n)
    {
        ll ansyt=ansy;
        // ll swayt=sway;
        ll x=sum+a[i];
        ll y=ans+a[i];
        // ansy=0;
        // if(sum+a[i]==ans+a[i])sway=swayt+ansyt;
        ans=max(abs(sum+a[i]),abs(ans+a[i]));
        // if(y==ans)ansy+=ansyt;
        // if(abs(y)==ans)ansy+=ansyt;
        // if(x==ans)ansy+=swayt;
        // if(abs(x)==ans)ansy+=swayt;
        sum+=a[i];
        // if(sum==ans)sway=0;
        // if(sum!=ans && sway==0)sway=ansyt;
        
        // cout<<x<<" "<<y<<" "<<sum<<" "<<ans<<endl;
        ansy=0;
        if(y==ans)ansy+=ansyt;
        if(abs(y)==ans)ansy+=ansyt;
        if(abs(x)==ans)ansy+=sway;
        if(x==ans)
        {
            ansy+=sway;
            sway=0;
        }
        else if(sway==0)sway=ansyt;
        else{
            sway+=sway*(abs(x)==sum);
        }
        
        // cout<<ansy<<" "<<sway<<endl;
        ansy%=998244353;
        sway%=998244353;
    }
    
    cout<<ansy<<endl;
  }
  return 0;
}