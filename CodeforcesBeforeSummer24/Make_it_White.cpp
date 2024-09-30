#include<iostream>
#include<vector>
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
    char t;
    vector<char> v;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t=='B')v.push_back(i);
    }
    int m=v.size();
    if(m==0)cout<<0<<endl;
    else if(m==1)cout<<1<<endl;
    else cout<<v[m-1]+1-v[0]<<endl;

  }
  return 0;
}