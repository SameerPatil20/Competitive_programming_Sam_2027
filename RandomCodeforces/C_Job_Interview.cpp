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
    int n,m;
    cin>>n>>m;
    ll p[n+m+1];
    ain(p,n+m+1)
    ll q[n+m+1];
    ain(q,n+m+1)
    bool c[n+m];
    int pr=0,te=0;
    int type=1;
    ll ans=0;
    int clutch=0;
    rp(n+m)
    {
        if(p[i]>q[i])
        {
            if(pr<n)
            {
                c[i]=1;
                pr++;
                ans+=p[i];
            }
            else 
            {
                c[i]=0;
                if(type!=2)
                {
                    type=2;
                    clutch=i;
                }
                te++;
                ans+=q[i];
            }
        }
        else{
            if(te<m)
            {
                c[i]=0;
                te++;
                ans+=q[i];
            }
            else 
            {
                c[i]=1;
                if(type!=3)
                {
                    type=3;
                    clutch=i;
                }
                pr++;
                ans+=p[i];
            }
        }
    }
    if(type==1)
    {
        rp(n+m)
        {
            if(c[i]==0)
            {
                cout<<ans+q[n+m]-q[i]<<" ";
            }
            else if(c[i]==1)
            {
                cout<<ans+p[n+m]-p[i]<<" ";
            }
        }
        cout<<ans<<endl;
    }
    if(type==2)
    {
        rp(n+m)
        {
            if(c[i]==0)
            {
                cout<<ans+q[n+m]-q[i]<<" ";
            }
            else if(c[i]==1)
            {
                cout<<ans+q[n+m]+p[clutch]-q[clutch]-p[i]<<" ";
            }
        }
        cout<<ans<<endl;
    }
    if(type==3)
    {
        rp(n+m)
        {
            if(c[i]==0)
            {
                cout<<ans+p[n+m]+q[clutch]-p[clutch]-q[i]<<" ";
            }
            else if(c[i]==1)
            {
                cout<<ans+p[n+m]-p[i]<<" ";
            }
        }
        cout<<ans<<endl;
    }
  }
  return 0;
}