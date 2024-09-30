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
    ll sum=0;
    map<int,int> mp;
    int maxid=0;
    int a[n];
    int b[n];
    rp(n)
    {
        cin>>a[i];
        if(mp[a[i]]>0)
        {
            if(maxid<a[i])
            {
                maxid=a[i];
            }
        }
        b[i]=maxid;
        mp[a[i]]++;
        sum+=a[i];
    }
    // out(b,n," ")
    // cout<<endl;
    // cout<<sum<<endl;
    int i=0;
    int t=0;
    while(i<n)
    {
        int count=1;
        while(i<n-1 && b[i+1]==b[i])
        {
            i++;
            count++;
        }
        i++;
        ll y= n-i;
        // cout<<y<<endl;
        if(count==1)
        {
            sum+=b[i-1]-t;
            b[i-1]=t;
        }
        sum+=1LL*b[i-1]*count*y;
        sum+=1LL*b[i-1]*(1LL*count*(count+1))/2;
        t=b[i-1];
    }
    cout<<sum<<endl;

  }
  return 0;
}