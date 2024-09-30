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
ll mod=1000000007;
int m,d;
string l,h;
ll memo[2020][2][2][2020];
int ten[2010];
int len;
ll rec(int n,int lo, int hi,int div)
{
    // cout<<n<<" "<<lo<<" "<<hi<<" "<<div<<endl;
    if(memo[n][lo][hi][div]!=-1)return memo[n][lo][hi][div];
    if(n==len)return memo[n][lo][hi][div]=div==0;
    int lolimit=0;
    int hilim=9;
    if(lo==1)
    {
        lolimit=l[n]-'0';
    }
    if(hi==1)
    {
        hilim=h[n]-'0';
    }
    if(n%2==1 && d>=lolimit && d<=hilim)
    {
        return memo[n][lo][hi][div]=rec(n+1,lo&(d==lolimit),hi&(d==hilim),(div+d*ten[len-1-n])%m);
    }
    if(n%2==1)return memo[n][lo][hi][div]=0;
    memo[n][lo][hi][div]=0LL;
    for(int i=lolimit; i<=hilim; i++)
    {
        if(i!=d)
        {
            memo[n][lo][hi][div]+=rec(n+1,lo&(i==lolimit),hi&(i==hilim),(div+i*ten[len-1-n])%m);
            memo[n][lo][hi][div]%=mod;
        }
    }
    return memo[n][lo][hi][div];
}
int main() {
    cin>>m>>d;
    cin>>l;
    cin>>h;
    len=l.size();
    ten[0]=1%m;
    rp(2005)
    {
        ten[i+1]=(ten[i]*10)%m;
    }
    memset(memo,-1,sizeof(memo));
    cout<<rec(0,1,1,0);
    return 0;
}