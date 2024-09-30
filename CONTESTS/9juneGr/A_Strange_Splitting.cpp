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
    int a[n];
    ain(a,n)
    // int mini=0,maxi=1;
    // rp(n)
    // {
    //     if(a[i]>a[maxi])maxi=i;
    //     if(a[i]<a[mini])mini=i;
    // }
    // vector<int> v;
    // int ma=0;
    // int mi=0;
    // rp(n)
    // {
    //     if(a[i]!=a[maxi] && a[i]!=a[mini])v.push_back(i);
    //     if(a[i]==a[maxi])ma++;
    //     if(a[i]==a[mini])mi++;

    // }
    // // cout<<mi<<ma<<endl;
    // if(a[maxi]==a[mini] || (v.size()==0 && mi>1 && ma>1))cout<<"NO"<<endl;
    // else if(v.size()!=0)  
    // {
    //     cout<<"YES"<<endl;
    //     rp(n)
    //     {
    //         if(a[i]==a[mini]||a[i]==a[maxi])cout<<"R";
    //         else cout<<"B";
    //     }
    //     cout<<endl;
    // }
    // else{
    //     cout<<"YES"<<endl;
    //     rp(n)
    //     {
    //         if(i==mini||i==maxi)cout<<"R";
    //         else cout<<"B";
    //     }
    //     cout<<endl;
    // }
    if(a[0]==a[n-1])
    {
        cout<<"NO"<<endl;
        continue;
    }
    if(a[0]==a[1])
    {
        cout<<"YES"<<endl;
        cout<<"R";
        rp(n-1)cout<<"B";
        cout<<endl;
        continue;
    }
    if(a[n-1]==a[n-2])
    {
        cout<<"YES"<<endl;
        
        rp(n-1)cout<<"B";
        cout<<"R";
        cout<<endl;
        continue;
    }
    cout<<"YES"<<endl;
        cout<<"R";
        rp(n-2)cout<<"B";
        cout<<"R";
        cout<<endl;

  }
  return 0;
}