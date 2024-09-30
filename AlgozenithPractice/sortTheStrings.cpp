#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
ll memo[100001];
string s[100001];
ll c[100001];
ll dp(int n)
{
    if(memo[n]!=-1)return memo[n];
    if(n==1)return memo[n]=0;
    {
        vector<ll> v;
        string s1=s[n-2];
        string s2=s[n-1];
        string s1r=s[n-2];
        reverse(s1r.begin(),s1r.end());
        string s2r=s[n-1];
        reverse(s2r.begin(),s2r.end());
        if(s1<=s2)
        {
            ll z=dp(n-1);
            if(z!=-2)v.push_back(dp(n-1));
        }
        if(s1r<=s2)
        {
            s[n-2]=s1r;
            ll z=dp(n-1);
            if(z!=-2)v.push_back(dp(n-1)+c[n-2]);
            s[n-2]=s1;
        }
        if(s1r<=s2r)
        {
            s[n-2]=s1r;
            s[n-1]=s2r;
            ll z=dp(n-1);
            if(z!=-2)v.push_back(dp(n-1)+c[n-2]+c[n-1]);
            s[n-2]=s1;
            s[n-1]=s2;
        }
        if(s1<=s2r)
        {
            s[n-1]=s2r;
            ll z=dp(n-1);
            if(z!=-2)v.push_back(dp(n-1)+c[n-1]);
            s[n-1]=s2;
        }
        if(v.size()==0)
        return memo[n]=-2;
        else
        {
            ll mini=__LONG_LONG_MAX__;
            for(int i=0;i<v.size();i++)
            {
                mini=min(mini,v[i]);
            }
            return memo[n]=mini;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ain(c,n)
        ain(s,n)
        memset(memo,-1,sizeof(memo));
        cout<<max(dp(n),-1LL)<<endl;
    }
}