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
//   int TestCases;
//   cin >> TestCases;
//   while (TestCases--)
//   {
//     ll n;
//     cin>>n;
//     ll a[n];
//     ain(a,n);
//     ll j=0;
//     while(j<n)
//     {
//         if(a[j]==-1)j++;
//         else break;
//     }
//     if(j==n)
//     {
//         rp(n)
//         {
//             cout<<1+(i%2)<<" ";
//         }
//         cout<<endl;
//         continue;
//     }
//     else{
//         bool check=1;
//         ll z=j+1;
//         while(j<n-1)
//         {
//             // cout<<j<<" bue"<<endl;
//             int count=0;
//             while(z<n && a[z]==-1)
//             {
//                 count++;
//                 z++;
//             }
//             if(z==n)break;
//             if(count==0)
//             {
//                 if(a[j]/2==a[j+1] || a[j]==a[j+1]/2)
//                 {
//                     j++;
//                     z++;
//                     continue;
//                 }
//                 else 
//                 {
//                     // cout<<"boi"<<endl;
//                     check=0;
//                     break;
//                 }
//             }
//             ll mini=min(a[j],a[z]);
//             ll maxi=max(a[j],a[z]);
//             // cout<<count<<" "<<mini<<" "<<maxi<<endl;
//             while(mini<maxi )
//             {
//                 mini*=2;
//                 mini++;
//                 count--;
//             }
//             count++;
//             // cout<<count<<" j "<<mini<<" "<<maxi<<endl;
//             if(count>=0 && count%2==0)
//             {
//                 j=z;
//                 z=j+1;
//             }
//             else{
//                 check=0;
//                 break;
//             }
            
//         }
//         cout<<check<<endl;
//     }
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
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll n;
    cin>>n;
    ll a[n];
    ain(a,n);
    ll j=0;
    ll z=0;
    bool check=1;
    while(j<n)
    {
        if(a[j]!=-1)
        {
            z=j+1;
            ll count=0;
            {
                while(z<n && a[z]==1)
                {
                    z++;
                }
                if(z==n)
                {
                    for(int i=j+1;i<n;i++)
                    {
                        if(i%2==0)a[i]=2*a[i-1];
                        else a[i]=a[i-1]/2;
                    }
                }
                ll mini=a[j];
                ll maxi=a[j];
                ll x
                ll mine=a[z];
                ll maxe=a[z];
                for(int i=0;i<=count+1;i++)
                {
                    if(a[i])
                }
            }

        }
        else j++;
    }
  }
  return 0;
}