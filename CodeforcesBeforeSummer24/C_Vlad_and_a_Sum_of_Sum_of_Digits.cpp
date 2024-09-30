#include<iostream>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
ll int sum_of_dig(ll int a)
{
    int sum=0;
    while(a>=1)
    {
        sum+=a%10;
        a=a/10;
    }
    return sum;
}
int main() {
  int TestCases;
  cin >> TestCases;
  ll int a[200000];
    a[0]=1;
    rp(199999)
    {
        a[i+1]=a[i]+sum_of_dig(i+2);
    }
  while (TestCases--) {
    // Your code here
    ll int n;
    cin>>n;
    cout<<a[n-1]<<endl;
    
  }
  return 0;
}