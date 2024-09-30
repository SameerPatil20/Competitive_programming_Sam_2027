#include<iostream>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n;
    cin>>n;
    ll int sum=0;
    ll int a[n];
    ll int b[n];
    rp(n)
    {
        cin>>a[i];
        sum+=a[i];
        b[i]=sum;
    }
    bool ans=true;
    rp(n)
    {
        if(b[i]<(i+1)*sum/n)
        {
            ans=false;
            break;
        }
    }
    if(ans==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}