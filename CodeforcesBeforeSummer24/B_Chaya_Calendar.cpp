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
    int ans;
    cin>>ans;
    int x;
    rp(n-1)
    {
        cin>>x;
        ans+=x-ans%x;
    }
    cout<<ans<<endl;
  }
  return 0;
}