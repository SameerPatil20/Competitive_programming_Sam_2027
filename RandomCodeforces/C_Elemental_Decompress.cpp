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
    pair<int,int> a[n];
    rp(n)
    {
        cin >> a[i].first ;
        a[i].second =i;
    }
    sort(a,a+n);
    vector<int> rem;
    int fi[n];
    int se[n];
    bool found=1;
    int value=1;
    rp(n)
    {
        while(value!=a[i].first)
        {
            rem.push_back(value);
            value++;
        }
        if(i==n-1 || (i<n-1 && a[i].first!=a[i+1].first))
        {
            fi[a[i].second]=value;
            se[a[i].second]=value;
            value++;
        }
        else if(i<n-2 && a[i+1].first==value && a[i+2].first==value)
        {
            found=0;
            break;
        }
        else if(rem.size()==0)
        {
            found=0;
            break;
        }
        else{
            fi[a[i].second]=value;
            se[a[i].second]=rem.back();
            fi[a[i+1].second]=rem.back();
            se[a[i+1].second]=value;
            value++;
            rem.pop_back();
            i++;
        }
    }
    if(found)
    {
        cout<<"YES"<<endl;
        out(fi,n," ")
        cout<<endl;
        out(se,n," ")
        cout<<endl;
    }
    else cout<<"NO"<<endl;
  }
  
  return 0;
}