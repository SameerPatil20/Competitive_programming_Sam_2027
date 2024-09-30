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
    int n;cin>>n;
    pair<int,int> ba[n];
    int b[n];
    rp(n)
    {
        cin>>ba[i].second;
    }
    rp(n)
    {
        cin>>ba[i].first;
    }
    int m;
    cin>>m;
    pair<int,int> d[m];
    rp(m)
    {
        cin>>d[i].first;
        d[i].second=i+1;
    }
    sort(ba,ba+n);
    sort(d,d+m);
    int i=0;
    int j=0;
    bool check=1;
    int extra=0;
    int fxta=0;
    int lw=0,rw=0;
    while(j<m)
    {
        int t=j;
        while(t<m && d[t].first==d[j].first)
        {
            t++;
        }
        while(i<n && ba[i].first<d[j].first)
        {
            if(ba[i].second!=ba[i].first)
            {
                check=0;
                break;
            }
            i++;
        }
        int comp=0;
        int total=0;
        while(i<n && ba[i].first==d[j].first)
        {
           if(ba[i].second!=ba[i].first)
            {
                comp++;
                total++;
            } 
            else
            {
                total++;
            }
            i++;
        }
        if(total>0 && t-j>0)
        {
            rw=max(rw,d[t-1].second);
        }
        extra+=min(total,t-j);
        if(comp>t-j)
        {
            check=0;
        }
        if(total==0)
        {
            fxta+=t-j;
            lw=max(lw,d[t-1].second);
        }
        if(check==0)break;
        
        // cout<<i<<" "<<j<<" "<<t<<" "<<check<<endl;
        j=t;
    }
    // cout<<check<<endl;
    while(i<n)
        {
            if(ba[i].second!=ba[i].first)
            {
                // cout<<"f"<<endl;
                check=0;
                break;
            }
            i++;
        }
    if(check==0)cout<<"NO"<<endl;
    else if(extra==0 && fxta>0    ||  lw>rw)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    // cout<<check<<endl;
  }
  return 0;
}