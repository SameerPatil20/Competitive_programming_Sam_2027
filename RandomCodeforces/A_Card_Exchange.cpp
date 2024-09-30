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
    int n,k;
    cin>>n>>k;
    int a[n];
    ain(a,n);
    sort(a,a+n);
    int i=0;
    vector<int> v;
    while(i<n)
    {
        int count=0;
        int j=i;
        while(a[i]==a[j])
        {
            count++;
            j++;
            if(j==n)break;
        }
        i=j;
        v.push_back(count);

    }
    sort(v.begin(),v.end());
    int m=v.size()-1;
    int extra=0;
    while(m>=0)
    {
        if(v[m]>=k)
        {
            extra+=(k-1)*(v[m]/k);
            v[m]%=k;
        }
        if(extra+v[m]>=k)
        {
            extra+=v[m]-1;
            v[m]=0;
        }
        m--;
    }
    if(extra>=k)
    {
        extra=k-1;
    }
    int sum=extra;
    rp(v.size())
    {
        sum+=v[i];
    }
    cout<<sum<<endl;
  }
  return 0;
}