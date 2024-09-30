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
    int n;
    cin>>n;
    ll a[n];
    ain(a,n)
    bool done[n];
    rp(n)done[i]=0;
    int d=n-1;
    cout<<"YES"<<endl;
    vector<pair<ll,ll>> v;
    rp(n-1)
    {
        map<int,int> mp;
        int j=0;
        while(j<n)
        {
            if(done[j]==1)
            {
                j++;
                continue;
            }
            if(mp[a[j]%d]>0)
            {
                v.push_back({mp[a[j]%d],j+1});
                done[j]=1;
                break;
            }
            mp[a[j]%d]=j+1;
            j++;
        }
        d--;
    }
    reverse(v.begin(),v.end());
    rp(v.size())
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
  }
  return 0;
}