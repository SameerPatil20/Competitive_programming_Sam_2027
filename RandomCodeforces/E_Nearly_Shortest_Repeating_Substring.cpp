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
    string s;
    cin>>s;
    vector<int> div;
    int y=1;
    while(y*y<=n)
    {
        if(n%y==0)div.push_back(y);
        y++;
    }
    y=div.size();
    if(div.back()*div.back()==n)
    {
        rp(y-1)div.push_back(n/div[y-2-i]);
    }
    else{
        rp(y)div.push_back(n/div[y-1-i]);
    }
    div.pop_back();
    int ans=n;
    for(auto i: div){
        int check=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]!=s[j%i])check++;
            if(check>1)break;
        }
        if(check<2)
        {
            ans=i;
            break;
        }
        check=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]!=s[(j%i)+i])check++;
            if(check>1)break;
        }
        if(check<2)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
  }
  return 0;
}