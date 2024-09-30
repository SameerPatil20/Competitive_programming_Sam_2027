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
    if(n==2)
    {
        cout<<min(a[0],a[1])<<endl;
        continue;
    }
    int maxi=0;
    int temp[3];
    temp[0]=a[0];
    temp[1]=a[1];
    rp(n-2)
    {
        temp[0]=a[i];
        temp[1]=a[i+1];
        temp[2]=a[i+2];
        sort(temp,temp+3);
        maxi=max(maxi,temp[1]);
    }
    cout<<maxi<<endl;
  }
  return 0;
}