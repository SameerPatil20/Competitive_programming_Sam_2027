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
    int n,k;
    cin>>n>>k;
    int a[n];
    ain(a,n)
    // cout<<k<<endl;
    if(k!=4)
    {
        int ans=10;
        rp(n)
        {
            if(a[i]%k==0)
            {
                ans=0;
                break;
            }
            ans=min(ans,k-(a[i]%k));
            // cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    else{
        int o=0;
        int tw=0;
        int th=0;
        int f=0;
        rp(n)
        {
            if(a[i]%4==0)f++;
            if(a[i]%4==1)o++;
            if(a[i]%4==2)tw++;
            if(a[i]%4==3)th++;
        }
        if(f>0 || tw>1)cout<<0<<endl;
        else{
            if(tw==1)
            {
                if(n>1)cout<<1<<endl;
                else cout<<2<<endl;
            }
            else if(th>0)cout<<1<<endl;
            else if(n>1) cout<<2<<endl;
            else cout<<3<<endl;
        }
    }
  }
  return 0;
}