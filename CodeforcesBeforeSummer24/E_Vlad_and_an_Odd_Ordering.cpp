#include<iostream>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
ll int div2c(ll int a)
{
    if(a%2==1)return a/2+1;
    else return a/2;
}
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    // Your code here
    ll int n,k;
    cin>>n>>k;
    ll int a=n;
    ll int t=0;
    int g=0,x;
    ll int po=1;
    while(t<k)
    {
        x=div2c(a);
        t+=x;
        a=n-t;
        g++;
        po*=2;
    }
    int p=k-t+x;
    int ans=(po*(1+2*(p-1)))/2;
    cout<<ans<<endl;
  }
  return 0;
}