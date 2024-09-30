#include<bits/stdc++.h>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    long long int n,k;
    cin>>n>>k;
    int i=0;
    while(true)
    {
        if(k%2==1)break;
        i++;
        k=k/2;
    }
    cout<<n-i<<endl;
  }
  return 0;
}