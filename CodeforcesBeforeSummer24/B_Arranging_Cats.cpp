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
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    char x;
    int count=0,countr=0;
    for(int j=0;j<n;j++)
    {
        cin>>x;
        if(x=='1' && a[j]=='0')count++;
        if(x=='0' && a[j]=='1')countr++;
    }
    cout<<max(count,countr)<<endl;
  }
  return 0;
}