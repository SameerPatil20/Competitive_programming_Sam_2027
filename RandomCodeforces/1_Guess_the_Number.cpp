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
    int l=1,r=1000000;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        cout<<mid<<endl;
        fflush(stdout);
        string c;
        cin>>c;
        if(c[0]=='<')
        {
            r=mid-1;
        }
        else if(c[0]=='>'){
            l=mid;
        }
    }
    cout<<"! "<<l<<endl;
    fflush(stdout);
  return 0;
}