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
    int n,k,x;
    cin>>n>>k>>x;
    int a[n];
    in(a,n)
    sort(a,a+n);
    int p_sum[n+1];
    p_sum[0]=0;
    for(int i=1;i<=n;i++)
    {
        p_sum[i]=p_sum[i-1]+a[i-1];
    }
    int answer=-500000000;
    for(int e=0;e<=k;e++)
    {
        int flag;
        flag=2*p_sum[max(n-e-x,0)]-p_sum[n-e];
        answer=max(answer,flag);
    }
    cout<<answer<<endl;
  }
  return 0;
}