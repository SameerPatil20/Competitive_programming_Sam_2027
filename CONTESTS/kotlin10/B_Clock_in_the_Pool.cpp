#include<bits/stdc++.h>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    long long int k,m;
    cin>>k>>m;
    if((m/k)%3==2)
    {
        cout<<0<<endl;
        continue;
    }
    else{
        cout<<(((m/(k*3))*3ll)+2ll)*k-m<<endl;
    }
  }
  return 0;
}