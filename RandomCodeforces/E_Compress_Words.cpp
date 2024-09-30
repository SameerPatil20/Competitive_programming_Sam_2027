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
int lps(string s)
{
    int m=s.size();
    vector<int> lp(m+1);
    lp[0]=-1;
    int i=0;
    int j=-1;
    while(i<m)
    {
        while(j!=-1 && s[i]!=s[j])j=lp[j];
        j++;
        i++;
        lp[i]=j;
    }
    return lp[m];

}
int main() {
    int n;
    cin>>n;
    vector<string> a(n);
    rp(n) cin>>a[i];
    string ans=a[0];
    for(int i=1;i<n;i++)
    {
        string p=a[i];
        p+='#';
        int k=ans.size();
        for(int j=max(0,k-1-int(a[i].size()));j<k;j++)
        {
            p+=ans[j];
        }
        int ls=lps(p);
        for(int j=ls;j<a[i].size();j++)
        {
            ans+=a[i][j];
        }
    }
    cout<<ans<<endl;
}