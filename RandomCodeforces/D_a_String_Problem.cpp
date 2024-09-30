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
// in this code i was calculating non 'a' letter after each letter many times
// so better to pre calculate it for the array and store it
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    string t;
    cin>>t;
    int n=t.size();
    // int nona=n;
    // rp(n)
    // {
    //     if(t[i]!='a')
    //     {
    //         nona=i;
    //         break;
    //     }
    // }
    // if(nona==n)
    // {
    //     cout<<n-1<<endl;
    //     continue;
    // }
    vector<int> nona(n,n);
    for(int i=n-1;i>=0;i--)
    {
        if(t[i]!='a')nona[i]=i;
        else if(i<n-1)nona[i]=nona[i+1];
    }
    if(nona[0]==n)
    {
        cout<<n-1<<endl;
        continue;
    }
    string s="";
    for(int i=nona[0];i<n;i++)
    {
        s+=t[i];
    }
    n=s.size();
    int z[n];
    z[0]=0;
    int l=0;
    int r=0;
    int i=1;
    while(i<n)
    {
        z[i]=0;
        if(i<r)
        {
            z[i]=min(r-i,z[i-l]);
        }
        while(i+z[i]<n && s[i+z[i]]==s[z[i]])
        {
            z[i]++;
        }
        if(i+z[i]>r)
        {
            l=i;
            r=i+z[i];
        }
        i++;
    }
    ll ans=0;
    for(int j=1;j<=n;j++)
    {
        int mini=nona[0];
        int i=j;
        bool check=1;
        while(i<n)
        {
            // int count=0;
            int count=nona[i+nona[0]]-i-nona[0];
            i=nona[i+nona[0]]-nona[0];
            // while(s[i]=='a')
            // {
            //     i++;
            //     count++;
            //     if(i==n)break;
            // }
            if(i==n)break;
            mini=min(count,mini);
            if(z[i]<j)
            {
                check=0;
                break;
            }
            i+=j;
        }
        if(check==1)ans+=mini+1;
    }
    cout<<ans<<endl;
  }
  return 0;
}