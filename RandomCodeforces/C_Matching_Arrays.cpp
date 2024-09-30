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
    int n,x;
    cin>>n>>x;
    pair<int,int> a[n];
    rp(n)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    pair<int,int> b[n];
    rp(n)
    {
        cin>>b[i].first;
        b[i].second=i;
    }
    sort(a,a+n);
    sort(b,b+n);
    int i=n-1;
    int j=n-1;
    int k=n-x-1;
    int ans[n];
    while(j>=0)
    {
        if(b[j].first<a[i].first && j+1==x)
        {
            ans[a[i].second]=b[j].first;
            i--;
            j--;
            x--;
        }
        else if(b[j].first>=a[i].first && j+1==x)
        {
            x=-1;
            break;
        }
        else if(j+1!=x)
        {
            if(a[k].first>b[j].first)
            {
                x=-1;
                break;
            }
            ans[a[k].second]=b[j].first;
            k--;
            j--;
        }
        
        // out(ans,n," ")
        // cout<<endl;
        // cout<<j<<" "<<x<<endl;
    }
    if(x==0)
    {
        cout<<"YES"<<endl;
        out(ans,n," ")
        cout<<endl;
    }
    else cout<<"NO"<<endl;
  }
  return 0;
}