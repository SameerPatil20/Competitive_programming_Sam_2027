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
    int n,m;
    cin>>n>>m;
    ll int a[n];
    int b[n];
    int sum=0;
    rp(n)
    {
        ll int x;
        cin>>x;
        a[i]=x;
        b[i]=0;
        while(x%10==0)
        {
            b[i]++;
            x=x/10;
        }
        while(a[i]>=1)
        {
            sum++;
            a[i]=a[i]/10;
        }
    }
    sort(b,b+n);
    for(int j=n-1;j>=0;j=j-2)
    {
        sum-=b[j];
    }
    if(m<sum)cout<<"Sasha"<<endl;
    else cout<<"Anna"<<endl;
  }
  return 0;
}