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
    int n,k;
    cin>>n>>k;
    int a=k/2 +2;
    int b=(3*k+4)/4;
    b=min(a,b);
    b=min(b,n);
    int c=n/b;
    //cout<<b<<endl;
    if(n%b!=0)c++;
    for(int i=0;i<c-1;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(j==0)cout<<i*b+1<<" ";
            else cout<<i*b+b+1-j<<" "; 
        }
    }
    int x=n%b;
    if(x==0)x=b;
    //cout<<x<<"c"<<endl;
    for(int i=0;i<x;i++)
    {
        if(i==0)cout<<max((c-1),0)*(b)+1<<" ";
        else cout<<max(c-1,0)*(b)+x+1-i<<" "; 
    }
    cout<<endl;
    cout<<c<<endl;
    for(int i=1;i<=c;i++)
    {
        for(int j=0;j<b;j++)
        {
            if((i-1)*b+j<n)cout<<i<<" ";
        }
    }
    cout<<endl;
    }
  return 0;
}