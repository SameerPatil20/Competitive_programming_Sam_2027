#include<iostream>
#include<string>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n,k;
    cin>>n>>k;
    string t;
    t='a';
    char q='b';
    rp(k-1)
    {
        t+=q;
        q++;
    }
    string s=t;
    rp(n-1)
    {
        s+=t;
    }
    cout<<s<<endl;
  }
  return 0;
}