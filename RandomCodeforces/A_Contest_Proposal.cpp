#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define v1(type,x) type x;cin>>x;
#define v2(type,x,y) type x,y;cin>>x>>y;
#define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
#define remax(maxo,new) maxo=max(maxo,new);
#define endl '\n'
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    int a[n];
    ain(a,n)
    int b[n];
    ain(b,n)
    int ans=0;
    int j=n-1;
    for(int i=n-1;i>=0;i--)
    {
        if(j==-1)break;
        j=min(j,i);
        while(b[i]<a[j])
        {
            j--;
            if(j==-1)
            {
                break;
            }
        }
        // cout<<i<<" "<<j<<endl;
        remax(ans,i-j)
    }
    // cout<< endl;
    cout<<ans<<endl;;
  }
  return 0;
}