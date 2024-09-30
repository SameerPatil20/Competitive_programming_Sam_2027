#include<iostream>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    // Your code here
    int n;
    cin>>n;
    int x;
    int sum=0;
    rp(n)
    {
        cin>>x;
        sum+=abs(x);
    }
    cout<<sum<<endl;
  }
  return 0;
}