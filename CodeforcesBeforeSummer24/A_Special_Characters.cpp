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
    if(n%2==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        rp(n/4)
        {
            cout<<"AABB";
        }
        if(n%4==0)cout<<endl;
        else cout<<"AA"<<endl;
    }
  }
  return 0;
}