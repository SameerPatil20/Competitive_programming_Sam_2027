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
    cin >> n;
    int a[n];
    ain(a,n)
    int g[n-1];
    rp(n-1)
    {
        g[i]=gcd(a[i],a[i+1]);
    }
    vector<int> v;
    rp(n-2)
    {
        if(g[i]>g[i+1])v.push_back(i);
    }
    if(v.size()==0)
    {
        cout<<"YES"<<endl;
        continue;
    }
    if(v.size()>2)
    {
        // cout<<v.size()<<endl;
        cout<<"NO"<<endl;
        continue;
    }
    if(v.size()==2)
    {
        if(v[1]-v[0]>2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(v[1]-v[0]==2)
        {
            int i=v[0];
            if(g[i]<=gcd(a[i+1],a[i+3]) && gcd(a[i+1],a[i+3])<=g[i+3])
            {
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        if(v[1]-v[0]==1)
        {
            int i=v[0];
            if((gcd(a[i],a[i+2])<=g[i+2]) && (i==0 || gcd(a[i+2],a[i])>=g[i-1]))
            {
                cout<<"YES"<<endl;
                continue;
            }
            else if(g[i]<=gcd(a[i+1],a[i+3]) && (i+3==n-1 || gcd(a[i+1],a[i+3])<=g[i+3]))
            {
                cout<<"YES"<<endl;
                continue;
            }
            else {
                cout<<"NO"<<endl;
                continue;
            }
        }
    }
    if(v.size()==1)
    {
        int i=v[0];
        if(i==0 || i==n-3)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(g[i+1]>=gcd(a[i-1],a[i+1]) && (i==1 || gcd(a[i-1],a[i+1])>=g[i-2]))
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(g[i]<=gcd(a[i+3],a[i+1]) && (i==n-4 || gcd(a[i+3],a[i+1])<=g[i+3]))
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(gcd(a[i+2],a[i])>=g[i-1] && gcd(a[i+2],a[i])<=g[i+2])
        {
            cout<<"YES"<<endl;
            continue;
        }
        else {
                cout<<"NO"<<endl;
                continue;
            }

    }
  }
  return 0;
}