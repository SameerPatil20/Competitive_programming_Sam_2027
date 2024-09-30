#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll int long long
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    map<int,pair<int,int>> mp;
    map<int,int> rep;
    int a,b;
    rp(n)
    {
      cin>>a>>b;
      if(a!=b)
      {
        mp[a].first++;
        mp[b].second=1;
      }
      else
      {
        rep[a]++;
      }
    }
      for(int i=1;i<=1000;i++)
      {
        if(mp[i].first>0 && rep[i]==0 && mp[i].second==0)count+=mp[i].first;
        else if(rep[i]==1 && mp[i].second==0)count++;
      }
      cout<<count<<endl;
  return 0;
}