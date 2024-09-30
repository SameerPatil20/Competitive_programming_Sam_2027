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
  int n;
  cin>>n;
  int a[n];
  ain(a,n);
  ll count=0;
  map<pair<int,int>,int> mp;
  map<pair<int,int>,int> mp2;
  for(int j=0;j<n;j++)
  {
    vector<int> dig;
    int x=a[j];
    int digSum=0;
    while(x>0)
    {
        dig.push_back(x%10);
        digSum+=dig.back();
        x/=10;
    }
    int ndig=dig.size();
    rp(ndig+1)
    {
        if(ndig-2*i==0)
        {
            digSum-=2*dig[i];
            continue;
        }
        count+=mp[{2*i-ndig,-digSum}];
        if(i!=ndig)digSum-=2*dig[i];
    }
    digSum*=-1;
    count+=mp2[{-ndig,-digSum}];
    count+=mp2[{ndig,digSum}];
    mp[{ndig,digSum}]++;
    mp[{-ndig,-digSum}]++;
    rp(ndig)
    {
        if(ndig-2*i==0)
        {
            digSum-=2*dig[i];
            continue;
        }
        if(i!=0)mp2[{ndig-2*i,digSum}]++;
        digSum-=2*dig[i];
    }
  }
  cout<<count+n<<endl;
  return 0;
}