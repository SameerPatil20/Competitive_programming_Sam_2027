#include<iostream>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n,q;
    cin>>n>>q;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=i*a[i];
    }
    for(int i=0;i<q;i++)
    {
        double s,d,k;
        cin>>s>>d>>k;
        int sum=0;
        for(int j=s-1;j<s+k*d-1;j+=d)
        {
            sum+=(a[j]*(d-s+1) + b[j])/d;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
  }
  return 0;
}