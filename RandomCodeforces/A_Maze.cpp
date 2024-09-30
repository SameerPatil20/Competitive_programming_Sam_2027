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
char a[510][510];
bool v[510][510];
int n,m,k;
int dfs(int i,int j)
{
    // cout<<i<<j
    if(i<0 || i>=n || j<0 || j>=m)return 0;
    v[i][j]=1;
    int allclear=0;
    if(j>0 && a[i][j-1]=='.' && v[i][j-1]==0)
    {
        allclear+=dfs(i,j-1);
    }
    if(i>0 && a[i-1][j]=='.' && v[i-1][j]==0)
    {
        allclear+=dfs(i-1,j);
    }
    if(j<m-1 && a[i][j+1]=='.' && v[i][j+1]==0)
    {
        allclear+=dfs(i,j+1);
    }
    if(i<n-1 && a[i+1][j]=='.' && v[i+1][j]==0)
    {
        allclear+=dfs(i+1,j);
    }
    if(!allclear && k>0)
    {
        // cout<<i<<" "<<j<<" destroyed"<<endl;
        k--;
        a[i][j]='X';
        return 0;
    }
    // cout<<i<<" "<<j<<" saved"<<endl;
    return 1;
}
int main() {
  
    
    cin>>n>>m>>k;
    
    rp(n)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            v[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                int c=dfs(i,j);
                break;
            }
        }
    }
    rp(n)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}