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
    int k[n];
    ain(k, n);
    double s=1;
    rp(n)
    {
        s-=1.0/k[i];
    }
    if(s<1e-12)cout<<-1<<endl;
    else{
        double total=2.0*double(n)/s;
        total=int(total);
        total+=n;
        // cout<<total<<endl;
        rp(n)
        {
            cout<<int(total/k[i])+1<<" ";
        }
    cout<<endl;
    }
  }
  return 0;
}