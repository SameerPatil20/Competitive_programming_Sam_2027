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
int n,m;
string s,t;
int sv;
int tv;
bool f=0;
int solve(int i,int j)
{
    if(i==n && j==m)return 1;
    if(i==n && t[j]=='*')return solve(i,j+1);
    if(j==m && s[i]=='*')return solve(i+1,j);
    if(i==n-1 && s[i]=='*')return 1;
    if(j==m-1 && t[j]=='*')return 1;
    if(i==n || j==m)return 0;
    if((s[i]=='*' || t[j]=='*' ) && (f==0))
    {
        
        f=1;
        
        if(sv!=-1 && tv!=-1)return solve(max(i,sv),max(j,tv));
        if(sv==-1 && tv!=-1)
        {
            while(j<tv)
            {
                if(t[j]=='-')
                i++;
                if(i==n+1)return 0;
                j++;
            }
            return solve(i,tv);
        }
        if(sv!=-1 && tv==-1)
        {
            while(i<sv)
            {
                if(s[i]=='-')
                j++;
                if(j==m+1)return 0;
                i++;
            }
            return solve(sv,j);
        }
    }
    
    if(s[i]=='*' || t[j]=='*' )
    {
        reverse(s.begin()+i,s.end());
        reverse(t.begin()+j,t.end());
        solve(i,j);
    }
    
    if(s[i]=='-')
    {
        solve(i+1,j+1);
    }
    else{
        if(t[j]=='-')return solve(i+1,j+1);
        if(t[j]==s[i]) return solve(i+1,j+1);
        else return 0;
    }
}
int main() {
    cin >> n >> m;
    cin>>s;
    cin>>t;
    tv=-1;
    sv=-1;
    rp(m)
    {
        if(t[m-1-i]=='*')
        {
            tv=m-1-i;
            break;
        }
    }
    rp(n)
    {
        if(s[n-1-i]=='*')
        {
            sv=n-1-i;;
            break;
        }
    }
    if(solve(0,0))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    // solve(0,0);
    // cout<<sv<<" "<<tv<<endl;
    // if(solver(0,0)!=solve(0,0))
    // {
    //     cout<<u<<endl;
    //     cout<<v<<endl;
    //     break;
    // }
}