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
    int n,m;
    cin>>n>>m;
    int maxi=m;
    int mini=n;
    int x,y;
    rp(n)
    {
        for(int j=0;j<m;j++)
        {
            char xp;
            cin>>xp;
            if(xp=='#')
            {
                if(i<mini)
                {
                    // cout<<"yo"<<endl;
                    x=j;
                    mini=i;
                }
                if(j<maxi)
                {
                    // cout<<"bo"<<endl;
                    y=i;
                    maxi=j;
                }
            }
        }
    }
    cout<<y+1<<" "<<x+1<<endl;
  }
  return 0;
}