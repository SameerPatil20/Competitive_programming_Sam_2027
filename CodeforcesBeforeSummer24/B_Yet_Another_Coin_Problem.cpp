#include<iostream>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  int a[38]={0,1,2,1,2,3,1,2,3,2,1,2,2,2,3,1,2,3,2,3,2,2,3,3,3,2,3,3,3,4,2,3,4,3,4,3,3,4};
  cin >> TestCases;
  while (TestCases--) {
    ll int n;
    cin>>n;
    if(n>37)
    
    {ll int b=(n-38)/15+1;
    n=n-b*15;
    cout<<b+a[n]<<endl;
    }
    else cout<<a[n]<<endl;
  }
  return 0;
}