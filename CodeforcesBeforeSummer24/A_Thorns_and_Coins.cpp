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
    int n;
    cin>>n;
    //char a;
    //char b;
    string s;
    cin>>s;
    //cin>>b;;
    int ans=0;
    rp(n-1)
    {
        //a=b;
        //cin>>b;
        if(s[i+1]=='@')ans++;
        if(s[i+1]=='*' && s[i]=='*')break;
        //cout<<b<<endl;
    }
    cout<<ans<<endl;
  }
  return 0;
}