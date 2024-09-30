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
    int n,q;
    cin>>n>>q;
    ll a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    // vector<vector<ll>> sum(333,vector<ll>(n+1));
    // vector<vector<ll>> isum(333,vector<ll>(n+1));
    // ll sum[333][n+1];  wrong
    // ll isum[333][n+1]; wrong
    ll** sum = new ll*[333];
    ll** isum = new ll*[333];
    for(int i=1;i<333;i++)
    {
        sum[i] = new ll[n+1]();
        isum[i] = new ll[n+1]();
        sum[i][0]=0;
        isum[i][0]=0;
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                sum[i][j]=a[j];
                isum[i][j]=j*a[j];
            }
            else 
            {
                sum[i][j]=sum[i][j-i]+a[j];
                isum[i][j]=isum[i][j-i]+j*a[j];
            }
        }
    }
    rp(q)
    {
        int s,d,k;
        cin>>s>>d>>k;
        if(d>332)
        {
            ll sumans=0;
            for(int j=0;j<k;j++)
            {
                sumans+=1LL*(j+1)*a[s+d*j];
            }
            cout<<sumans<<" ";
        }
        else{
            ll sumans=0;
            sumans+=isum[d][s+d*(k-1)];
            // cout<<sumans<<endl;
            if(s>d)
            {
                sumans-=isum[d][s-d];
                sumans+=1LL*(s)*sum[d][s-d];
            }
            sumans-=1LL*s*sum[d][s+d*(k-1)];
            sumans/=d;
            sumans+=sum[d][s+d*(k-1)];
            if(s>d)
            {
                sumans-=sum[d][s-d];
            }
            cout<<sumans<<" ";
        }
    }
    cout<<endl;
  }
  return 0;
}