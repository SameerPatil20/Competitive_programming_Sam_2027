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
    int sum=0;
    bool two=false;
    bool one=false;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        x=x%3;
        sum+=x;
        if(x==2){two=true;}
        else if(x==1){one=true;}
    }    
    sum=sum%3;
    //cout<<sum<<endl;
    if(sum==0)cout<<0<<endl;
    else if(sum==1 && one==1)cout<<1<<endl;
    else if(sum==1 && one==0)cout<<2<<endl;
    else cout<<1<<endl;
  }
  return 0;
}