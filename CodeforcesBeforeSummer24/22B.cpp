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
    int k;
    cin>>k;
    ll a[n];
    in(a,n)
    // int forward=-1;
    // ll sum=0;
    // for(int i=0;i<n;i++)
    // {
    //     sum+=a[i];
    //     if(sum<0)
    //     {
    //         forward=i;
    //     }
    // }
    // sum=0;
    // int backward=n;
    // for(int i=0;i<n;i++)
    // {
    //     sum+=a[n-1-i];
    //     if(sum<0)
    //     {
    //         backward=n-i-1;
    //     }
    // }
    // if(backward<=forward)
    // {
    //     cout<<1000000007+sum%1000000007<<"bid"<<endl;
    // }
    // else
    // {

    //     ll g=0;
    //     for(int i=forward+1;i<backward;i++)
    //     {
    //         g+=a[i];
    //     }
    //     ll j=g;
    //     cout<<j<<endl;
    //     g=g%1000000007;
    //     rp(k)
    //     {
    //         g=g*2;
    //         g=g%1000000007;
    //     }
    //     cout<<g+sum-j<<endl;
    }
  }
  return 0;
    cout<<(-6)%5<<endl;
}