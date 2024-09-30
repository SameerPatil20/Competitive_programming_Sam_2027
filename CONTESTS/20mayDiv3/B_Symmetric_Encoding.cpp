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
#define endl '\n'
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    char a[n];
    vector<char> d;
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(mp[a[i]]==0)
        {
        d.push_back(a[i]);
        mp[a[i]]++;
        }
    }
    sort(d.begin(),d.end());
    for(int i=0;i<d.size();i++)
    {
        mp[d[i]]=d[d.size()-1-i];
    }
  for(int i=0;i<n;i++)
  {
    a[i]=mp[a[i]];
    cout<<a[i];
  }
  cout<<endl;
  }
  return 0;
}