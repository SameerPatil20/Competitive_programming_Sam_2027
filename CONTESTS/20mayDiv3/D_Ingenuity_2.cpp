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
    string s;
    cin>>s;
    map<char,int> mp;
    rp(n)
    {
        mp[s[i]]++;
    }
    if(n==2 && s[0]!=s[1])
    {
        cout<<"NO"<<endl;
        continue;
    }
    if(abs(mp['N']-mp['S'])%2==1 || abs(mp['E']-mp['W'])%2==1)
    {
        cout<<"NO"<<endl;
        continue;
    }
    
    int rn=ceil(mp['N']/2.0);
    int rs=ceil(mp['S']/2.0);
    int re=floor(mp['E']/2.0);
    int rw=floor(mp['W']/2.0);
    rp(n)
    {
        if(s[i]=='N' && rn>0)
        {
            cout<<'R';
            rn--;
            continue;
        }
        if(s[i]=='S' && rs>0)
        {
            cout<<'R';
            rs--;
            continue;
        }
        if(s[i]=='E' && re>0)
        {
            cout<<'R';
            re--;
            continue;
        }
        if(s[i]=='W' && rw>0)
        {
            cout<<'R';
            rw--;
            continue;
        }
        cout<<'H';
    }
    cout<<endl;
  }
  return 0;
}