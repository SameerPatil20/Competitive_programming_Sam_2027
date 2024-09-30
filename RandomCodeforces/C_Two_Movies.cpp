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
    int m1=0,m2=0,plus=0,minus=0;
    rp(n)
    {
        if(a[i]>b[i])m1+=a[i];
        else if(a[i]<b[i])m2+=b[i];
        else if(a[i]==-1)minus++;
        else if(a[i]==1)plus++;
    }
    int mini=min(m1,m2);
    int maxi=max(m1,m2);
    int delta=maxi-mini;
    if(plus>=delta)
    {
        plus-=delta;
        mini=maxi;
    }
    else{
        mini+=plus;
        plus=0;
    }
    delta=maxi-mini;
    if(minus>=delta)
    {
        minus-=delta;
        maxi=mini;
    }
    else{
        maxi-=minus;
        minus=0;
    }
    if(plus>=minus)cout<<mini+(plus-minus)/2<<endl;
    else cout<<mini-(minus-plus)/2-(minus-plus)%2<<endl;

  }
  return 0;
}