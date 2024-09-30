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
#define endl '\n'
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    ll a[n];
    ain(a,n)
    ll ri[n-1];
    ll le[n-1];
    ri[0]=1;
    for(int i=1;i<n-1;i++)
    {
        if(a[i]-a[i-1]<a[i+1]-a[i])
        {
            ri[i]=a[i+1]-a[i];
            le[i-1]=1;
        }
        else{
            le[i-1]=a[i]-a[i-1];
            ri[i]=1;
        }
    }
    le[n-2]=1;
    for(int i=1;i<n-1;i++)
    {
        ri[i]+=ri[i-1];
        le[n-2-i]+=le[n-1-i];
    }
    int m;
    cin>>m;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        if(r>l)
        {
            if(l==1)cout<<ri[r-2]<<endl;
            else cout<<ri[r-2]-ri[l-2]<<endl;
        }
        else
        {
            if(l==n)cout<<le[r-1]<<endl;
            else cout<<le[r-1]-le[l-1]<<endl;
        }
    }
  }
  return 0;
}