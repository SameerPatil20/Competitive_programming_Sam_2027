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
#define MOD 1000000007
using namespace std;
ll pw(ll x,  ll y){
    ll ans = 1 ;  x = x%MOD ; 
 
    while(y){
        if(y&1) ans = (ans*x)%MOD ; 
        y = y>>1 ; x = (x*x)%MOD ;
    }
    return ans ;
}
int main() {
  int TestCases;
  cin >> TestCases;
  ll fact[200100];
  fact[0]=1;
  for(int i=1;i<200100;i++)
  {
    fact[i]=(fact[i-1]*i)%MOD;
  }
  while (TestCases--)
  {
    int n,k;
    cin>>n>>k;
    int ones=0;
    rp(n)
    {
        int x;
        cin>>x;
        ones+=x;
    }
    int zeros=n-ones;
    // cout<<zeros<<endl;
    ll ans=0;
    int t=max(k/2+1,k-zeros);
    while(t<=min(ones,k))
    {
        // cout<<ones<<" "<<zeros<<" "<<(1LL*fact[ones]*fact[zeros])/fact[t]<<" "<<t<<endl;
        ans+=(((fact[ones] * pw((fact[ones - t] * fact[t]) % MOD, MOD - 2))% MOD )*((fact[zeros] * pw((fact[k-t] * fact[zeros+t-k]) % MOD, MOD - 2))% MOD ));
        ans%=MOD;
        t++;
    }
    cout<<ans<<endl;
  }
  return 0;
}