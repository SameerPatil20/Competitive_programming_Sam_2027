#include<iostream>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    long long int n,f,a,b;
    cin>>n>>f>>a>>b;
    long long int x=0,y;
    for(int i=0;i<n;i++)
    {
        cin>>y;
        f=f-min(b,a*(y-x));
        swap(x,y);
    }
    if(f>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}