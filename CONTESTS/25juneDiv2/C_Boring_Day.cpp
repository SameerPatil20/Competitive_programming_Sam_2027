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
//     ll n,l,r;
//     cin>>n>>l>>r;
//     ll a[n];
//     ain(a,n);
//     ll i=0,j=0;
//     ll ans=0;
//     ll sum=0;
//     while(j!=n)
//     {
//         sum+=a[j];
//         j++;
//         if(sum<l)
//         {
//             continue;
//         }
//         if(sum>r)
//         {
//             while(sum>r)
//             {
//                 sum-=a[i];
//                 i++;
//             }
//             if(sum<l)continue;
//         }
//         ans++;
//         i=j;
//         sum=0;
//     }
//     cout<<ans<<endl;
//   }
//   return 0;
// }
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
    int n, l, r;
    cin>> n>> l>> r;
    int a[n];
    in(a, n);
    int round =0;
    ll sum =0;
    int start =0;
    for(int i=0; i<n; i++){
        sum += a[i];
        if(sum>r) {
            while(sum>r){
                sum -= a[start];
                start ++;
            }
            // sum =a[i];
            if(sum>=l && sum<= r){
                start=i+1;
                round++;
                sum=0;
            }
        }
        // else if(sum<l){
        //     continue;
        //     // if(sum>=l && sum<=r) {
        //     //     round++;
        //     //     sum=0;
        //     // }

        // }
        else if(sum>=l){
            start = i+1;
            round++;
            sum=0;
        }
    }
    cout<< round<< endl;
    
  }
  return 0;
}