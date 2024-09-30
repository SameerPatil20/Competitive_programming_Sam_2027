#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
ll memo[510];
int a[510];
int s[510];
ll dp(int n)       // WRONG 
{
    if(memo[n]!=-1)return memo[n];
    if(n==2)return memo[n]=a[0]*a[1];
    if(n==1)return memo[n]=0;
    return memo[n]=max(dp(n-1)+s[n-2]*a[n-1],dp(n-2)+a[n-1]*a[n-2]+s[n-3]*((a[n-1]+a[n-2])%100));
}

ll solvermemo[510][510];
ll p[510];
ll solver(int l,int r)
{
    if(solvermemo[l][r]!=-1)return solvermemo[l][r];
    if(r-l==0)return solvermemo[l][r]=0;
    if(r-l==1)return solvermemo[l][r]=a[l]*a[r];
    ll maxi=0;
    for(int i=l;i<r;i++)
    {
        ll temp=solver(l,i)+solver(i+1,r)+((p[i+1]-p[l])%100)*((p[r+1]-p[i+1])%100);
        maxi=max(maxi,temp);
    }
        return solvermemo[l][r]=maxi;
}
int main()
{
    srand(time(0));
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        // cin>>n;
        n=1+rand()%4;
        // ain(a,n);
        for(int i=0;i<n;i++)
        {
            a[i]=10*(rand()%10);
        }
        s[0]=a[0];
        for(int i=1;i<n;i++)
        {
            s[i]=(a[i]+s[i-1])%100;
        }
        p[0]=0;
        for(int i=1;i<=n;i++)
        {
            p[i]=(a[i-1]+p[i-1]);
        }
        memset(memo,-1,sizeof(memo));
        memset(solvermemo,-1,sizeof(solvermemo));
        if(dp(n)!=solver(0,n-1))
        {
            cout<<"wrong"<<endl;
            out(a,n," ")
            cout<<endl;
            cout<<dp(n)<<" "<<solver(0,n-1)<<endl;
        }
    }
}