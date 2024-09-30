#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(ll lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(ll lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(ll lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define v1(type,x) type x;cin>>x;
#define v2(type,x,y) type x,y;cin>>x>>y;
#define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
#define remax(maxo,new) maxo=max(maxo,new);
#define endl '\n'
using namespace std;
ll n,m;
ll memo[1010][5];
string s="narek";
vector<string> a;
ll dp(ll i,ll j)
{
    if(i==n)
    {
        return -j;
    }
    if(memo[i][j]!=INT_MIN)
    {
        return memo[i][j];
    }
    memo[i][j]=max(dp(i+1,j),memo[i][j]);
    ll p=0;
    ll d=0;
    ll waste=0;
    while(p<m)
    {
        if(a[i][p]==s[d%5])
        {
            // waste++;
            p++;
            d++;
        }
        else
        {
            for(ll l=0;l<5;l++)
            {
                if(a[i][p]==s[l])waste++;
            }
            p++;
        }
    }
    // if(i==0 && j==0)
    // {
    //     cout<<memo[i][j]<<endl;
    // }
    // cout<<i<<" "<<j<<" "<<waste<<" "<<d<<endl;
    // if(i==0 && j==0)
    // {
    //     cout<<dp(i+1,d%5)+((d/5)*5)<<endl;
    // }
    memo[i][j]=max(dp(i+1,d%5)+((d/5)*5)-waste,memo[i][j]);
    // if(i==0 && j==0)
    // {
    //     cout<<memo[i][j]<<endl;
    // }
    if(j==0)
    {
        return memo[i][j];
    }
    d=j;
    waste=0;
    ll temp=0;
    p=0;
    while(p<m)
    {
        if(a[i][p]==s[d%5])
        {
            temp++;
            p++;
            d++;
        }
        else
        {
            for(ll l=0;l<5;l++)
            {
                if(a[i][p]==s[l])waste++;
            }
            p++;
        }
    }
    memo[i][j]=max(dp(i+1,d%5)+((d/5)*5)-waste,memo[i][j]);
    // cout<<i<<" "<<j<<" "<<memo[i][j]<<endl;
    return memo[i][j];

}

int main() {
  ll TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    cin>>n>>m;
    a.clear();
    a.resize(n);
    rp(n)
    {
        cin>>a[i];
        for(ll j=0;j<5;j++)
        {
            memo[i][j]=INT_MIN;
        }
    }
    // dp(0,0);
    // rp(n)
    // {
    //     for(ll j=0;j<5;j++)
    //     {
    //         cout<<memo[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp(0,0)<<endl;

  }
  return 0;
}