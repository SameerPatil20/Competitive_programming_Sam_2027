#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll n;
    cin>>n;
    ll a[n];
    ain(a,n);
    ll shortest_index=0;
    rp(n)
    {
        if(a[shortest_index]>a[i])
        shortest_index=i;
    }
    bool isSorted=true;
    for(int i=shortest_index+1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            isSorted=false;
            break;
        }
    }
    if(!isSorted)
    {
        cout<<"no"<<endl;
    }
    else{
        cout<<shortest_index<<endl;
    }
  }
  return 0;
}