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
int lucky(int i)
{
    int mini=i%10;
    int maxi=mini;
    while(i>0)
    {
        mini=min(mini,i%10);
        maxi=max(maxi,i%10);
        i=i/10;
    }
    return maxi-mini;
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int l , r;
    cin >> l >> r;
    if(r-l>98)
    {
        while(l<=r)
        {
        if(l%100==90)
        {cout<<l<<endl;break;}
        l++;
        }
    }
    else{
        int ans=l;
        int maxi=lucky(l);
        while(l<=r)
        {
            int temp=lucky(l);
            if(temp>maxi)
            {
                maxi=temp;
                ans=l;
            }
            if(maxi==9)break;
            l++;
        }
        cout<<ans<<endl;
    }
  }
  return 0;
}