#include<iostream>
#include<map>
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
    int g=0;
    ll int a;
    map<ll int,int> mp;
    rp(n)
    {
        cin>>a;
        if(mp[2147483647-a]==0)
        {
            g++;
            mp[a]++;
        }
        else{
            mp[2147483647-a]--;
        }
    }
    cout<<g<<endl;
  }
  return 0;
}