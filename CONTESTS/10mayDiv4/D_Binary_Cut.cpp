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
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  
  while (TestCases--)
  {
    bool x=false;
  bool ans=false;
    string s;
    cin>>s;
    int i=0;
    int count=0;
    int count2=0;
    int n=s.size();
    while(i<n)
    {
        if(s[i]=='1')
        {
            if(x==1)
            {ans=1;}
            count++;
            while(i<n && s[i]=='1')
            {
                i++;
            }
        }
        else if(s[i]=='0')
        {
            x=1;
            count2++;
            while(i<n && s[i]=='0')
            {
                i++;
            }
        }
    }
    if(ans==1)cout<<max(1,count+count2-1)<<endl;
    else cout<<max(1,count+count2)<<endl;
  }
  return 0;
}