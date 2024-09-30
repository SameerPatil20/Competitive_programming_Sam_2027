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
    ll int n;
    cin>>n;
    string s;
    string b;
    cin>>s;
    if(s[0]<s[s.size()-1])
    cout<<s<<endl;
    else
    {    
        for(int i=s.size()-1;i>=0;i--)
        {
            b+=s[i];
        }
        if(s[0]>s[s.size()-1])
        {
            cout<<b<<s<<endl;
        }
        else{
            if(s<=b)cout<<s<<endl;
            else cout<<b<<s<<endl;
        }
    }
  }
  return 0;
}