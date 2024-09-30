#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int b[n];
    int p[n];
    for(int i=1;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<n;i++)
    {
        cin>>p[i];
    }
    int memo[2][k+1][2];
    for(int i=0;i<=k;i++)
    {
        memo[n&1][i][0]=0;
        memo[n&1][i][1]=0;
    }
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<=k;j++)
        {
            if(j!=k)memo[i&1][j][0]=min(memo[(i+1)&1][j][0]+b[i],memo[(i+1)&1][j+1][1]+p[i]);
            else memo[i&1][j][0]=memo[(i+1)&1][j][0];
            memo[i&1][j][1]=min(memo[(i+1)&1][j][1]+p[i],memo[(i+1)&1][j][0]+b[i]);
        }
    }
    cout<<memo[1][0][0]<<endl;
}