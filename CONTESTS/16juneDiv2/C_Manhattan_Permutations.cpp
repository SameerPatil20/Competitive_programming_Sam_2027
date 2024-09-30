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
    ll n,k;
    cin>>n>>k;
    ll max=0;
    if(n%2)max=(n*n-1LL)/2LL;
    else max=(n*n)/2LL;
    if(n%2==1)
    {
        if(max<k)
        {
            cout<<"No"<<endl;  
            continue; 
        }
        if((max-k)%4!=0)
        {
            cout<<"No"<<endl;
            continue;
        }
        else{
            cout<<"Yes"<<endl;
            ll ans[n+1];
            ll x=(n+1LL)/2LL;
            // cout<<x<<endl;
            for(ll i=1;i<=x;i++)
            {
                // cout<<x<<" "<<k<<endl;
                if(k>=4*(x-i))
                {
                    ans[i]=n+1-i;
                    ans[n+1-i]=i;
                    k-=4*(x-i);
                }
                else
                {
                    ans[i]=i;
                    ans[n+1-i]=n+1-i;
                }
            }
            rp(n)
            {
                cout<<ans[i+1]<<" ";
            }
            cout<<endl;
        }     
    }
    else{
        if(max<k)
        {
            cout<<"No"<<endl;  
            continue; 
        }
        if(k%2!=0)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(k==4 || k==max-4)
        {
            cout<<"No"<<endl;
            continue;
        }
        else{
            cout<<"Yes"<<endl;
            ll ans[n+1];
            ll x=(n+1LL)/2LL;
            // cout<<x<<endl;
            for(ll i=1;i<=x;i++)
            {
                // cout<<x<<" "<<k<<endl;
                if(k>=4*(x-i))
                {
                    ans[i]=n+1-i;
                    ans[n+1-i]=i;
                    k-=4*(x-i);
                }
                else
                {
                    ans[i]=i;
                    ans[n+1-i]=n+1-i;
                }
            }
            rp(n)
            {
                cout<<ans[i+1]<<" ";
            }
            cout<<endl;
        }
    }
  }
  return 0;
}