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
  string s;
  cin>>s;
  int n=s.size();
  int z[n];
  z[0]=0;
  int l=0;
  int r=0;
  int i=1;
  while(i<n)
  {
    z[i]=0;
    if(i<r)
    {
        z[i]=min(r-i,z[i-l]);
    }
    while(i+z[i]<n && s[i+z[i]]==s[z[i]])
    {
        z[i]++;
    }
    if(i+z[i]>r)
    {
        l=i;
        r=i+z[i];
    }
    i++;
  }
//   out(z,n," ")
  int maxi=0;
  i=1;
  while(i<n)
  {
    if(maxi>=z[i] && z[i]+i==n)
    {
        for(int j=0;j<z[i];j++)
        {
            cout<<s[i+j];
        }
        cout<<endl;
        return 0;
    }
    maxi=max(maxi,z[i]);
    i++;
  }
  cout<<"Just a legend"<<endl;
  return 0;
}