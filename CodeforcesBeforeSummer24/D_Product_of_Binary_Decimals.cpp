#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    int a[14]={10,11,101,111,1011,1001,1101,11111,11101,10111,10011,10101,11001,10001};
    int i=13;
    while(i>=0)
    {
        if(n%a[i]==0)
        {
            n=n/a[i];
            continue;
        }
        else i--;
    }
    if(n==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}