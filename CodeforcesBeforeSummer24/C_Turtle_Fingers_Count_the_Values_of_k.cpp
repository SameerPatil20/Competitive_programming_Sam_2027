#include<iostream>
#include<numeric>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;

int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    // Your code here
    int a,b,l;
    cin>>a>>b>>l;
    int lc=l;
    int A=0,B=0,G=0;
    int g=gcd(a,b);
    a=a/g;
    b=b/g;
    while(lc%a==0 && a!=1)
    {
        A++;
        lc=lc/a;
    }
    lc=l;
    while(l%b==0 && b!=1)
    {
        B++;
        l=l/b;
    }
    while(lc%g==0 && g!=1)
    {
        G++;
        lc=lc/g;
    }
    cout<<(A+1)*(B+1)*(G+1)<<endl;
  }
  return 0;
}