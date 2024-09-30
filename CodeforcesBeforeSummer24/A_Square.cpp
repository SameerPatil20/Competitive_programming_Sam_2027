#include<iostream>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
   int x,y;
   cin>>x>>y;
   int a=x;
   int b;
   for (int i=0;i<3;i++){
   cin>>x>>y;
   if(x!=a)b=x;}
   cout<<(a-b)*(a-b)<<endl;
  }
  return 0;
}