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
  string t;
  cin>>t;
  int n=t.size();
  int kmp[n+1];
  kmp[0]=-1;
  kmp[1]=0;
  int i=1,j=0;
  while(i<n)
  {
    while(j!=-1 && t[i]!=t[j])j=kmp[j];
    kmp[++i]=++j;
  }
  if(2*kmp[n]<=n)cout<<"NO"<<endl;
  else{
    cout<<"YES"<<endl;
    for(int i=0;i<kmp[n];i++)cout<<t[i];
    cout<<endl;
  }
  return 0;
}