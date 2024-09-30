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
    ll x;
    cin>>x;
    vector<int> v;
    while(x>0)
    {
        v.push_back(x%2);
        x/=2;
    }
    int i=0;
    int y=v.size();
    while(i<y)
    {
        int j=i;
        while(v[j]==1)
        {
            j++;
            if(j==y)
            {
                break;
            }
        }
        if(j==i)
        {
            i++;
            continue;
        }
        else if(j==i+1)
        {
            i+=2;
            continue;
        }
        else
        {
            v[i]=-1;
            if(j==y)v.push_back(1);
            else v[j]=1;
            for(int k=i+1;k<j;k++)
            {
                v[k]=0;
            }
            i=j;
        }
    }
    cout<<v.size()<<endl;
    out(v,v.size()," ")
    cout<<endl;
  }
  return 0;
}