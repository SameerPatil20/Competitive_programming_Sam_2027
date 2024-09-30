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
    map<int,int> mp;
    vector<int> v;
    rp(n)
    {
        int x;
        cin>>x;
        if(mp[x]==0)
        {
            v.push_back(x);
            mp[x]=1;
        }
    }
    sort(v.begin(), v.end());
    int i=0;
    while(v[i]==i+1)
    {
        i++;
        if(i==v.size())break;
    }
    if(v[0]!=1)
    {
        cout<<"Alice"<<endl;
        continue;
    }
    if((i%2==1 && i!=v.size()) || (i%2==0 && i==v.size()))cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
  }
  return 0;
}