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
    int i=1;
    
    while(n-i>52)
    {
        i++;
    }
    char a='a'+i-1;
    int j=1;
    while(n-i-j>26)
    {
        j++;
    }
    char b='a'+j-1;
    char c='a'+n-i-j-1;
    cout<<a<<b<<c<<endl;
  }
  return 0;
}