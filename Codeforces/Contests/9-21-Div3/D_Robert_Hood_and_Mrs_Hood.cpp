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
    int n,d,k;
    cin>>n>>d>>k;
    int a[n-d+3];
    rp(n-d+3)a[i]=0;
    rp(k)
    {
        int l,r;
        cin>>l;
        cin>>r;
        a[max(l-d+1,1)]++;
        a[min(n-d+2,r+1)]--;
    }
    // out(a,n-d+3," ")
    // cout<<endl;
    rp(n-d+2)a[i+1]+=a[i];
    
    // int start=1;
    // int end=d;
    int mother=0;
    int mini=INT_MAX;
    int brother=0;
    int maxi=-1;
    // out(a,n-d+3," ")
    // cout<<endl;
    for(int i=1;i<=n-d+1;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
            brother=i;
        }
        if(a[i]<mini)
        {
            mini=a[i];
            mother=i;
        }
    }
    // multiset<int> ms;
    // for(int i=1;i<=d;i++)
    // {
    //     ms.insert(a[i]);
    // }
    // out(a,n+2," ")
    // cout<<endl;
    // while(true)
    // {
    //     int top=*ms.rbegin();
    //     cout<<top<<endl;
    //     if(top>maxi)
    //     {
    //         maxi=top;
    //         brother=start;
    //     }
    //     if(top<mini)
    //     {
    //         mini=top;
    //         mother=start;
    //     }
    //     ms.erase(ms.find(a[start]));
    //     start++;end++;
    //     if(end==n)break;
    //     ms.insert(a[end]);
    // }
    cout<<brother<<" "<<mother<<endl;
    
  }
  return 0;
}