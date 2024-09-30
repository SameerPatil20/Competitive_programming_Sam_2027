#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    ll a[n];
    ain(a,n)
    ll b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        b[x-1]+=1;
        b[y]-=1;
    }
    for(int i=1;i<n;i++)
    {
        b[i]+=b[i-1];
    }
}