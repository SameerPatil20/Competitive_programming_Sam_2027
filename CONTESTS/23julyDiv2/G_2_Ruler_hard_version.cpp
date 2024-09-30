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
    int l,r;
    l=2;
    r=999;
    while(r>l)
    {
        int mid1=(2*l+r)/3;
        int mid2=(l+r*2+2)/3;
        cout<<"? "<<mid1<<" "<<mid2<<endl;
        cout.flush();
        int ans;
        cin>>ans;
        if(ans==mid1*mid2)
        {
            l=mid2+1;
        }
        else if(ans==(mid1)*(mid2+1))
        {
            l=mid1+1;
            r=mid2;
        }
        else{
            r=mid1;
        }
    }
    cout<<"! "<<r<<endl;
    cout.flush();
  }
  return 0;
}