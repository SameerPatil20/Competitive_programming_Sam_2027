#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=1;
    int error=0;
    int k=1;
    while(k<n)
    {
        int x=(k+1)%i;
        x=x-1;
        if(x==-1)x=i-1;
        if(s[k]==s[x])
        {
            k++;
        }
        else if(error==0)
        {
            error+=1;
            k++;
        }
        else
        {
            i++;
            k=i;
            error=0;
            continue;
        }
    }
    if(n%i!=0)i=n;
    string p;
    for(int j=n-1;j>=0;j--)
    {
        p+=s[j];
    }
    int ans=i;
    i=1;
    error=0;
    k=1;
    while(k<n)
    {
        int x=(k+1)%i;
        x=x-1;
        if(x==-1)x=i-1;
    
        if(p[k]==p[x])
        {
            k++;
        }
        else if(error==0)
        {
            error+=1;
            k++;
        }
        else
        {
            i++;
            k=i;
            error=0;
            continue;
        }
    }
    if(n%i!=0)i=n;
    cout<<min(ans,i)<<endl;
  }
  return 0;
}