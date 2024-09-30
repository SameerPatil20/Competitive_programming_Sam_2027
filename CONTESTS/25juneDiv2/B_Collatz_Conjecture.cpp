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
    v3(ll,x,y,k)
    while(x!=1)
    {
        if(k>=y-(x%y))
        {
            k-=y-(x%y);
            x=x/y+1;
            while(x%y==0)x/=y;
            if(x==2 && y==2)
            {
                x+=k%2;
                k=0;
                break;
            }
            
        }
        else{
            x+=k;
            k=0;
            break;
        }
        // cout<<x<<" "<<k<<endl;
    }
    if(k==0)cout<<x<<endl;
    else{
        cout<<x+k%(y-1)<<endl;
    }
  }
  return 0;
}