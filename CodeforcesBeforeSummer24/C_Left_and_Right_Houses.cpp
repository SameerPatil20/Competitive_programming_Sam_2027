#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    int a[n];
    char x;
    cin>>x;
    if(x=='0')a[0]=0;
    else a[0]=1;
    rp(n-1)
    {
        int y;
        cin>>x;
        if(x=='0')y=0;
    else y=1;
        a[i+1]=a[i]+y;
    }
    vector<int> v;
    if(a[n-1]>=n/2+n%2)
    v.push_back(0);
    if(n-a[n-1]>=n/2+n%2)
    v.push_back(n);
    for(int i=1;i<n;i++)
    {
        if(i-a[i-1]>=i/2+(i%2) && a[n-1]-a[i-1]>=(n-i)/2+((n-i)%2))
        v.push_back(i);
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    int ans=v[0];
    float mi=abs(1.0*n/2-v[0]);
    for(int i=1;i<v.size();i++)
    {
        if(abs(1.0*n/2-v[i])<mi)
        {
            ans=v[i];
            mi=abs(1.0*n/2-v[i]);
        }
    }
    cout<<ans<<endl;
  }
  return 0;
}