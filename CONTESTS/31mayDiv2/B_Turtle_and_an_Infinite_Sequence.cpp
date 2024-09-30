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
    ll x=0;
    ll pow=1;
    if(m==0)cout<<n<<endl;
    
    else{
        for(int i=0;i<32;i++)
        {
            bool yo=0;
            if((n/pow)%2==1)
            {
                // cout<<"a"<<endl;
                yo=1;
            }
            else{
                ll y=pow*(1+n/pow)-n;
                if(n/pow!=0)y=min(y,n+1-(n/pow)*pow);
                if(m>=y)
                {
                    // cout<<"b"<<endl;
                    yo=1;
                }
            }
            if(yo)x+=pow;
            pow*=2;
            // cout<<x<<endl;
        }
        cout<<x<<endl;
    }
  }
  return 0;
}