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
    int a[n][20];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        for(int j=0;j<20;j++)
        {
            a[i][j]=x%2;
            x/=2;
        }
    }
    int maxi=0;
    for(int i=0;i<20;i++)
    {
        int j=0;
        int count=0;
        while(j<n)
        {
            while(a[j][i]==0)
            {
                count++;
                j++;
                if(j==n)break;
            }
            if(count==n)continue;
            maxi=max(maxi,count);
            count=0;
            j++;
        }
    }
    cout<<maxi+1<<endl;
  }
  return 0;
}