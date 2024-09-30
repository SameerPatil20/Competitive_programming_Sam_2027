#include<bits/stdc++.h>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    int mini=n;
    while(n>=0)
    {
        mini=min(n%3,mini);
        n=n-5;
        if(mini==0)
        {
            break;
        }
    }
    cout<<mini<<endl;
  }
  return 0;
}