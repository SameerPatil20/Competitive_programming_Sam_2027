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
    map<int,int> mp;
    int a[n+1];
    int b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
    }
    int ans=0;
    int check=1;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        if(mp[b[i]]==0)
        {
            check=0;
        }
        ans+=(b[i]!=a[i]);
        mp[a[i]]=mp[b[i]];
        swap(a[i],a[mp[b[i]]]);
        mp[b[i]]=i;
    }  
    if(check==1 && ans%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}