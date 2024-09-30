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
    cin >> n;
    int l[n];
    int r[n];
    rp(n)
    {
        cin >> l[i] >> r[i];
    }
    int low=0;
    int high=1e9;
    while(high>low)
    {
        int mid=(low+high)/2;
        bool check=1;
        int le=0;
        int re=0;
        rp(n)
        {
            le=max(0,le-mid);
            re=re+mid;
            le=max(le,l[i]);
            re=min(re,r[i]);
            if(re<le)
            {
                check=0;
                break;
            }
        }
        if(check)high=mid;
        else low=mid+1;
    }
    cout<<high<<endl;
    
  }
  return 0;
}