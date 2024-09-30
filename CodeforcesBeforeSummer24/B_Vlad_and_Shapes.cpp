#include<iostream>
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
    int z;
    int p,t=0;
    bool ans=0;
    rp(n)
    {
        cin>>z;
        if(z!=0 && t==0)
        {
            t++;
            p=z;
            continue;
        }
        if(t==1)
        {
            if(z==p)
            {
                ans=1;
            }
        }
        
    }
    if(ans==1)
    {
        cout<<"SQUARE"<<endl;

    }
    else cout<<"TRIANGLE"<<endl;
  }
  return 0;
}