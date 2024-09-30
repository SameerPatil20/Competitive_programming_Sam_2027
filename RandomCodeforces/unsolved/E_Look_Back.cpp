// #include<bits/stdc++.h>
// #define rp(n) for(decltype(n) i=0;i<n;i++)
// #define rp2(n,j) for(decltype(n) j=0;j<n;j++)
// #define ll long long int
// #define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
// #define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
// #define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
// #define v1(type,x) type x;cin>>x;
// #define v2(type,x,y) type x,y;cin>>x>>y;
// #define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
// #define remax(maxo,new) maxo=max(maxo,new);
// #define endl '\n'
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//   int TestCases;
//   cin >> TestCases;
//   while (TestCases--)
//   {
//     ll n;
//     cin >> n;
//     ll a[n];
//     // vector<int> bit[n];
//     rp(n)
//     {
//         cin>>a[i];
//         // while(a[i]>0)
//         // {
//         //     bit[i].emplace_back(a[i]%2);
//         //     a[i]>>=1;
//         // }
//         // reverse(bit[i].begin(),bit[i].end());
//     }
//     ll op=0;
//     rp(n-1)
//     {
//         // if(bit[i+1].size()<bit[i].size())
//         // {
//         //     int z=bit[i].size()-bit[i+1].size();
//         //     op+=z;
//         //     while(z--)bit[i+1].emplace_back(0);
           
//         // }
//         // if(bit[i+1].size()>bit[i].size())continue;
//         // if(bit[i+1]<bit[i])
//         // {
//         //     op++;
//         //     bit[i+1].emplace_back(0);
//         // }
//         while(a[i+1]<a[i])
//         {
//             op++;
//             a[i+1]<<=1;
//         }
//     }
//     cout<<op<<endl;
//   }
//   return 0;
// }
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll n;
    cin >> n;
    ll a[n];
    vector<int> bit[n];
    rp(n)
    {
        cin>>a[i];
        while(a[i]>0)
        {
            bit[i].emplace_back(a[i]%2);
            a[i]>>=1;
        }
        reverse(bit[i].begin(),bit[i].end());
    }
    vector<int> o;
    rp(n-1)
    {
          ll op=0;
        if(bit[i+1].size()<bit[i].size())
        {
            int z=bit[i].size()-bit[i+1].size();
            op+=z;
            // while(z--)bit[i+1].emplace_back(0);
           
        }
        if(bit[i+1].size()>bit[i].size())continue;
        if(bit[i+1]<bit[i])
        {
            op++;
            // bit[i+1].emplace_back(0);
        }
        o.push_back(op);
    }
    int count=0;
    if(o.size() > 0)count=o[0];
    
    rp(o.size()-1)
    {
      o[i+1]+=o[i];
      count+=o[i+1];
    }
    cout<<count<<endl;
  }
  return 0;
}