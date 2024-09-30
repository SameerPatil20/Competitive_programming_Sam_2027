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
    // Your code here
    int n;
    cin>>n;
    string s;
    int a;
    int m[26];
    rp(26)
    {
        m[i]=0;
    }
    rp(n)
    {
        cin>>a;
        int j=0;
        while(m[j]!=a)
        {
            j++;
        }
        m[j]++;
        s+='a'+j;
    }
    cout<<s<<endl;
  }
  return 0;
}