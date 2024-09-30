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
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    ain(a, n);
    ain(b, n);
    int ail=0;
    int air=n-1;
    int bil=0;
    int bir=n-1;
    bool check=1;
    while(ail<air)
    {
        // cout<<min(a[ail],a[air])<<" "<<min(b[bil],b[bir])<<" "<<max(a[ail],a[air])<<" "<<max(b[bil],b[bir])<<endl;
        if(min(a[ail],a[air])==min(b[bil],b[bir]) && max(a[ail],a[air])==max(b[bil],b[bir]))
        {
            if(a[ail]==b[bil])
            {
                ail++;
                bil++;
            }
            else{
                ail++;
                bir--;
            }
        }
        else{
            check=0;
            break;
        }
    }
    if(check)
    {
        cout<<"Bob"<<endl;
    }
    else cout<<"Alice"<<endl;
  }
  return 0;
}