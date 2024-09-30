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
    rp(n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int m=n-1;
    bool check=0;
    while(m>=0)
    { 
        int count=1;
        // cout<<m<<endl;
        while(m>0 && a[m-1]==a[m])
        {
            m--;
            count++;
        }
        m--;
        // cout<<count<<endl;
        if(count%2)
        {
            cout<<"YES"<<endl;
            check=1;
            break;
        }
    }
    if(!check)cout<<"NO"<<endl;
  }
  return 0;
}