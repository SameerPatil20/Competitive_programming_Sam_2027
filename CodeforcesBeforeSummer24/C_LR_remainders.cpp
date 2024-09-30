#include<iostream>
#include<string>
#include<cmath>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
#define mod 1000000007
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n,m;
    cin>>n>>m;
    ll int a[n];
    rp(n)
    {
      cin>>a[i];
    }
    char b[n];
    int countl=0;
    rp(n)
    {
      cin>>b[i];
      if(b[i]=='L' && i!=n-1)countl++;
    }
    int ans[n];
    ans[0]=a[countl]%m;
    int r=countl+1;
    int l=countl-1;
    for(int i=n-2;i>=0;i--)
    {
      if(b[i]=='L')
      {
        ans[n-1-i]=(ans[n-2-i]*a[l])%m;
        l--;
      }
      else{
        ans[n-1-i]=(ans[n-2-i]*a[r])%m;
        r++;
      }
    }
    rp(n)
    {
      cout<<ans[n-1-i]<<" ";
    }
    cout<<endl;
    }
  return 0;
}