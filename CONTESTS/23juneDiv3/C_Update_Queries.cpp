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
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    ll indi[m];
    ain(indi,m)
    sort(indi,indi+m);
    char c[m];
    ain(c,m)
    sort(c,c+m);
    // out(c,m," ")
    s[indi[0]-1]=c[0];
    ll k=1;
    rp(m-1)
    {
        if(indi[i+1]!=indi[i])
        {
            s[indi[i+1]-1]=c[k];
            k++;
        }
    }
    cout<<s<<endl;
  }
  return 0;
}