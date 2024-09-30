#include<iostream>
#include<algorithm>
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
    int a[n];
    rp(n)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<0<<endl;
        continue;
    }
    int m=1,b=1;
    int i=0;
    while(a[i]==a[i+1] && i<n-1)
    {
        m++;
        i++;
    }
    if(m==n)
    {
        cout<<0<<endl;
        continue;
    }
    int j=n-1;
    while(a[j]==a[j-1] && j>0)
    {
        b++;
        j--;
    }
    if(a[0]!=a[n-1])
    {
        if(m>b)b=m;
        cout<<n-b<<endl;
        continue;
    }
    cout<<n-m-b<<endl;
  }
  return 0;
}