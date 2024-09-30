#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll int long long
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    in(a,n)
    int ans[k+1];
    set(ans,k+1,0)
    int x;
    rp(m)
    {
        cin>>x;
        if(x<=k)ans[x]++;
    }
    rp(k)
    {
        ans[i+1]+=ans[i];
    }
    int sum=0;
    rp(n)
    {
        if(a[i]<=k)sum+=ans[k-a[i]];
    }
    cout<<sum<<endl;
  }
  return 0;
}