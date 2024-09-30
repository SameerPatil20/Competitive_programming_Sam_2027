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
    int lasti[n+1];
    int maxi=0;
    int maxi2=0;
    int times[n+1];
    int d=0;
    rp(n+1)
    {
        lasti[i]=-1;
        times[i]=0;
    }
    // out(lasti,n," ");
    // cout<<endl;
    rp(n)
    {
        int a,b;
        cin>>a>>b;
        // out(lasti,n," ");
        // cout<<endl;
        // cout<<" check "<<a<<" "<<b<<" "<<lasti[b]<<endl;
        if(lasti[b]!=-1)
        {
            int wait=d-lasti[b]-1;
            if(wait<times[b] && wait<a)
            {
                times[b]+=a-wait;
            }
            else{
                times[b]=a;
                times[b]=max(a,times[b]);
            }
            // cout<<times[b]<<endl;
        }
        else{
            times[b]=a;
        }
        lasti[b]=d+a-1;
        // cout<<times[b]<<endl;
        d+=a;
        maxi=max(maxi,times[b]);
        cout<<maxi<<" ";
    }
    cout<<endl;


  }
  return 0;
}