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
    ll n,m;
    cin>>n>>m;
    ll maxi=0;
    vector<pair<ll,ll>> v;
    rp(n)
    {
        ll l;
        cin>>l;
        vector<ll> x(l);
        for(int j=0;j<l;j++)
        {
            cin>>x[j];
        }
        sort(x.begin(),x.end());
        bool y=0;
        ll count=0;
        ll p1,p2;
        ll j=0;
        while(true)
        {
            // if(j==l)
            if(j>=l || x[j]>count)
            {
                if(y)break;
                else{
                    p1=count;
                    count++;
                    j--;
                    y=1;
                }
            }
            else if(x[j]==count)
            {
                count++;
            }
            else if(x[j]>count)
            {
                if(y)break;
                else{
                    count++;
                    j--;
                    y=1;
                }
            }
            j++;
        }
        p2=count;
        // remax(maxi,p1);
        v.push_back({p1,p2});
        // v.push_back({p2,-1});
    }
    sort(v.rbegin(),v.rend());
    // pair<int,int> maxi;
    map<ll,ll> mp;
    int l=v.size();
    ll buf=0;
    for(int i=0;i<l;i++)
    {
        // if(i>0 && v[i].first==v[i-1].first && v[i].second==v[i-1].second)
        // {
        //     buf=max(buf,mp[v[i].first]);
        // }
        if(mp[v[i].first]!=0)
        {
            int buf1=max(max(mp[v[i].second],v[i].second),mp[v[i].first]);
            buf=max(buf,buf1);
        }
        mp[v[i].first]=max(mp[v[i].second],v[i].second);
        // mp[v[i].second]=max(buf,mp[v[i].second]);
    }
    int prev=0;
    ll answer=0;
    for(auto &x:mp)
    {
        if(x.first<=buf)
        {
            answer+=(min(m,x.first)-prev)*buf;
            if(m<x.first)
            {
                answer+=buf;
                break;
            }
            answer+=max(buf,x.second);
        }
        if(x.first>buf)
        {
            if(prev<buf)
        }
        prev=x.first+1;
    }
    // map<int,int> mp;
    // set<int> s;
    // for(auto &x:v)
    // {
    //     mp[-x.second]=max(mp[-x.first],-x.first);
    //     // cout<<-x.second<<" "<<mp[-x.second]<<endl;
    //     s.insert(-x.second);
    // }
    // ll ans=0;
    // for(auto &x:s)
    // {
    //     ans+=mp[x];
    // }
    // cout<<ans<<endl;
    // ans+=maxi*(maxi+1-s.size());
    // if(m>maxi)
    // {
    //     ans+=(m*(m+1))/2;
    //     ans-=(maxi*(maxi+1))/2;
    // }
    // cout<<ans<<endl;

  }
  return 0;
}