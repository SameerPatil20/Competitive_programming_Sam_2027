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
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ain(a,n);
    sort(a,a+n);
    map<ll,vector<ll>> mp;
    rp(n)
    {
        if(i==n-1)mp[a[i]%k].push_back(a[i]);
        else if(a[i]!=a[i+1])mp[a[i]%k].push_back(a[i]);
        else i++;
    }
    bool check=1;
    ll ans=0;
    if(n%2==0)
    {
        for(auto i : mp)
        {
            if(i.second.size()%2!=0)
            {
                check=0;
                break;
            }
            else
            {
                for(int j=0;j<i.second.size()-1;j+=2)
                {
                    ans+=(i.second[j+1]-i.second[j])/k;
                }
            }
        }
        if(check)cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    else{
        bool dcheck=1;
        for(auto i : mp)
        {
            if(i.second.size()%2!=0 && dcheck==0)
            {
                check=0;
                break;
            }
            else if(i.second.size()%2!=0)
            {
                ll o=i.second.size();
                if(o!=1)
                {
                    // ll ansi=0,ansii=0;
                    // for(int j=0;j<i.second.size()-1;j+=2)
                    // {
                    //     ansi+=(i.second[j+1]-i.second[j])/k;
                    // }
                    // for(int j=1;j<i.second.size()-1;j+=2)
                    // {
                    //     ansii+=(i.second[j+1]-i.second[j])/k;
                    // }
                    // // cout<<ansi<<" "<<ansii<<endl;
                    // ans+=min(ansi,ansii);
                    ll ansi=0;
                    ll va=0;
                    while(va<o-1)
                    {
                        ansi+=(i.second[va+1]-i.second[va]);
                        va+=2;
                    } 
                    ll ansii=ansi;
                    va=o-2;
                    while(va>=0)
                    {
                        ansi+=(1-2*((o-2-va)%2))*(i.second[va+1]-i.second[va]);
                        ansii=min(ansi,ansii);
                        va--;
                    } 
                    ans+=ansii/k;
                }
                dcheck=0;
            }
            else{
                for(int j=0;j<i.second.size();j+=2)
                {
                    ans+=(i.second[j+1]-i.second[j])/k;
                }
            }
        }
        if(check)cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    
  }
  return 0;
}