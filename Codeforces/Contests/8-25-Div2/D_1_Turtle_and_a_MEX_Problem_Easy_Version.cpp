#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(ll lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(ll lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(ll lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define remax(maxo,new) maxo=max(maxo,new);
#define endl '\n'
using namespace std;
int main() {
  ll TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll n,m;
    cin>>n>>m;
    ll maxi=0;
    rp(n)
    {
        ll l;
        cin>>l;
        vector<ll> x(l);
        for(int j=0;j<l;j++)
        {
            cin>>x[j];
        }
        sort(x.begin(),x.end());
        bool y=0;
        ll count=0;
        ll j=0;
        while(true)
        {
            // if(j==l)
            if(j>=l || x[j]>count)
            {
                if(y)break;
                else{
                    count++;
                    j--;
                    y=1;
                }
            }
            else if(x[j]==count)
            {
                count++;
            }
            else if(x[j]>count)
            {
                if(y)break;
                else{
                    count++;
                    j--;
                    y=1;
                }
            }
            j++;
        }
        remax(maxi,count);
        // cout<<maxi<<endl;
    }
    ll ans;
    // cout<<maxi<<endl;
    if(maxi>=m)ans=1LL*maxi*(m+1);
    else{ ans=(m*(m+1))/2;
    // cout<<ans<<maxi<<endl;
    ans+=(maxi*(maxi+1))/2;}
    cout<<ans<<endl;
  }
  return 0;
}