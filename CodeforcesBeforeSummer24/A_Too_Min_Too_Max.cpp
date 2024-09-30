#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll int long long
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define print(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    int a[n];
    in(a,n)
    sort(a,a+n);
    cout<<2*(a[n-1]+a[n-2]-a[1]-a[0])<<endl;
  }
  return 0;
}