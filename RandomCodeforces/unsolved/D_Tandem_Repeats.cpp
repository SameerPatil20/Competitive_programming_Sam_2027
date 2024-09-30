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
    string s;
    cin>>s;
    int n=s.length();
    int i=0,j=1;
    int len=0;
    int ans=0;
    bool found=true;
    while(i<n-1 && j<n)
    {
        found=1;
        while(i+len<j)
        {
            if(j+len<n && (s[i+len]=='?'|| s[j+len]=='?' || s[i+len]==s[j+len]))
            {
                len++;
            }
            else
            {
                j++;
                if(j==n)
                {
                    i++;
                    j=i+1;
                }
                found=0;
                len=0;
                continue;
            }
        }
        if(found==0)continue;
        if(i+len==j)ans=max(ans,2*len);
        j++;
    }
    cout<<ans<<endl;
  }
  return 0;
}