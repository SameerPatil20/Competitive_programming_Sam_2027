#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  string a,b;
  cin>>a>>b;
  if(a.length()!=b.length())
  cout<<"NO"<<endl;
  else
  {
    string t;
    rp(a.length())t+='0';
    if(a==t && b==t)cout<<"YES"<<endl;
    else if(a==t || b==t)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
  return 0;
}