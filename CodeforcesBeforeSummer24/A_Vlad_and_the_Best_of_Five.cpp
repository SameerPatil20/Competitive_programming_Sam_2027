#include<iostream>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int a=0,b=0;
    char z;
    rp(5)
    {
        cin>>z;
        if(z=='A')a++;
        else b++;
    }
    if(a>b)cout<<"A"<<endl;
    else cout<<"B"<<endl;
  }
  return 0;
}