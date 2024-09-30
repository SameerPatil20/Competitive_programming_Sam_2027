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
    vector<int> d;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='D')d.push_back(i);
    }
    int os=0;
    int es=0;
    if(d.size()==0)
    {
        if(n%2==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        continue;
    }
    
    else{
        // cout<<d.size()<<endl;
        for(int i=0;i<d.size()-1;i++)
        {
            if(d[i+1]-d[i]>1 && (d[i+1]-d[i])%2==0)
            {
                os++;
            }
            if(d[i+1]-d[i]>1 && (d[i+1]-d[i])%2==1)
            {
                es++;
            }
        }
        if(n+d[0]-d.back()>1 && (n+d[0]-d.back())%2==1)
            {
                es++;
            }
         if(n+d[0]-d.back()>1 && (n+d[0]-d.back())%2==0)
            {
                os++;
            }
        // cout<<os<<" "<<es<<endl;
        if(os%2==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
  }
  return 0;
}