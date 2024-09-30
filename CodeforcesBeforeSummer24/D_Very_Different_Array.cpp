#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n,m;
    cin>>n>>m;
    long long int a[n];
    long long int b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    long long int D=0;
    sort(a,a+n);
    sort(b,b+m);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-b[m-1-i])>=abs(a[i]-b[n-1-i]) && count==0) D+=abs(a[i]-b[m-1-i]);
        else {D+=abs(a[i]-b[n-1-i]);count++;}
    }
    cout<<D<<endl;
  }
  return 0;
}