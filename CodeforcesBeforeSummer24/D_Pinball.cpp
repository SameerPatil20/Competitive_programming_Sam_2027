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
    char s[n];
    rp(n)
    {
        cin>>s[i];
    }
    int a[n];
    int b[n];
    rp(n)
    {
        a[i]=0;
        b[i]=0;
    }
    for(int i=0,i<n,i++)
    {
        if(s[i]=='<' && i!=0)
        a[i-1]++;
        else if(s[i]=='>' && i!=n-2) b[i+1]++;
    }
    rp(n-1)
    {
        b[i+1]+=b[i];
    }
    for(int i=n-2,i>=0,i--)
    {
        a[i]=a[i]+a[i+1];
    }
    rp(n-1)
    {
        b[i+1]+=b[i];
    }
    for(int i=n-2,i>=0,i--)
    {
        a[i]=a[i]+a[i+1];
    }
  }
  return 0;
}