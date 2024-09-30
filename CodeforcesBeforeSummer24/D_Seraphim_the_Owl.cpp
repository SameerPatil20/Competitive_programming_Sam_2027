#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n,m;
    cin>>n>>m;
    ll a[n];
    ll b[n];
    in(a,n)
    in(b,n)
    ll sum=0;
    for(int i=n-1;i>=m;i--)
    {
        sum+=min(a[i],b[i]);
    }
    ll mi=a[0];
    for(int i=1;i<m;i++)
    {
        mi+=b[i];
    }
    ll y=mi;
    for(int i=1;i<m;i++)
    {
        y=y-a[i-1]-b[i]+a[i];
        mi=min(y,mi);
    }
    cout<<sum+mi<<endl;
  }
  return 0;
}