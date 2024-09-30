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
    long long int a[n];
    in(a,n)
    long long int b[n-2];
    if(n==3)
    {
        if(a[0]==a[2] && a[1]==a[0]*2)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
        continue;
    }
    b[0]=a[0];
    b[1]=a[1]-a[0]*2;
    rp(n-4)
    {
        b[i+2]=a[i+2]-b[i]-b[i+1]*2;
    }
    bool check=true;
    rp(n-2)
    {
        if(b[i]<0)
        {
            check=false;
            break;
        }
    }
    if(a[n-1]!=b[n-3])check=false;
    if(a[n-2]!=b[n-3]*2 +b[n-4])check=false;
    if(check==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
  return 0;
}