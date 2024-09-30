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
    string s;
    cin>>s;
    int n = s.length();
    int st=0;
    int en=n-1;
    while(st<en && s[st]==s[en])
    {
        st++;
        en--;
    }
    string t=".";
    while(st<=en)
    {
        t+=s[st];
        t+='.';
        st++;
    }
    int k=t.size();
    if(k==1)
    {
        cout<<s<<endl;
        continue;
    }
    int mana[k];
    mana[0]=0;
    int center=0;
    int l=0;
    int r=0;
    for(int i=1;i<k;i++)
    {
        mana[i]=0;
        if(i<=r)
        {
            mana[i]=min(r-i,mana[2*center-i]);
        }
        while(i-mana[i]-1>=0 && i+mana[i]+1<k && t[i-mana[i]-1]==t[i+mana[i]+1])mana[i]++;
        if(i+mana[i]>r)
        {
            center=i;
            r=i+mana[i];
        }
    }
    // out(mana,k," ")
    // cout<<endl;
    int maxLen=0;
    int cen=-1;
    for(int i=1;i<k-1;i++)
    {
        if(i-mana[i]==0 || i+mana[i]==k-1)
        {
            if(maxLen<mana[i])
            {
                maxLen=mana[i];
                cen=i;
            }
        }
    }
    // cout<<t<<endl;
    // cout<<cen<<endl;
    // cout<<maxLen<<endl;
    string ans="";
    int u=n-1-en;
    for(int i=0;i<u;i++)
    {
        ans+=s[i];
    }
    for(int i=cen-maxLen;i<=cen+maxLen;i++)
    {
        if(t[i]!='.')ans+=t[i];
    }
    for(int i=en+1;i<n;i++)
    {
        ans+=s[i];
    }
    cout<<ans<<endl;
  }
  return 0;
}