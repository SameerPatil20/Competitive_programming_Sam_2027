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
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    pair<int,int> b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i].first;
        b[i].second=i;
    }
    pair<int,int> c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i].first;
        c[i].second=i;
    }
    
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    int maxi=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(a[n-1-i].second!=b[n-1-j].second && a[n-1-i].second!=c[n-1-k].second && c[n-1-k].second!=b[n-1-j].second)
                {
                    maxi=max(maxi, a[n-1-i].first+b[n-1-j].first+c[n-1-k].first);
                }
            }
        }
    }
    cout<<maxi<<endl;
  }
  return 0;
}