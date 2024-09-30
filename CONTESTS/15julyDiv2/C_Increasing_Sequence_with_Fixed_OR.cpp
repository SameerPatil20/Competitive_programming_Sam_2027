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
//     ll d=n;
//     vector<int> b;
//     int count=0;
//     vector<int> pos;
//     int j=0;
//     while(d>0)
//     {
//         b.push_back(d%2);
//         if(d%2)pos.push_back(j);
//         count+=b.back();
//         d/=2;
//         j++;
//     }
//     j=pos.size();
//     if(count==1)
//     {
//         cout<<1<<endl;
//         cout<<n<<endl;
//         continue;
//     }
//     ll ans=count+1;
//     cout<<ans<<endl;
//     reverse(pos.begin(), pos.end());
//     reverse(b.begin(),b.end());
//     int i=0;
//     int ptr=1;
//     int che=0;
//     // rp(j)
//     // {
//     //     b[i]=1;
//     // }
//     ans=n;
//     // out(pos,j," ")
//     // cout<<endl;
//     while(i<=count)
//     {
//         // cout<<che<<endl;
//         ll temp=ans;
//         for(int k=che;k<j;k++)
//         {
//             if((ans>>pos[k])&1)
//             {
//                 // cout<<pos[k]<<" check1 "<<endl;
//                 ans-=1LL<<pos[k];
//             }
//             else 
//             {
//                 // cout<<pos[k]<<" check0 "<<endl;
//                 ans+=1LL<<pos[k];
//             }
//         }
//         // cout<<ans<<" "<<ptr<<endl;
//         if(i%2==0 && ptr<j)
//         {
//             ans+=1LL<<(pos[ptr]);
//         }
//         che+=(i>0);
//         cout<<ans<<" ";
//         ptr++;
//         i++;
//     }
//     cout<<endl;


//   }
//   return 0;
// }
//Ridam Jain
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cassert>
#include <climits>
 
#define ll long long
#define f(i,n) for(ll i=0;i<n;i++)
#define f1(i,a,b) for(ll i=a;i<b;i++)
#define vl vector<ll>
#define vvl vector<vl>
#define vi vector<int>
#define vvi vector<vi>
#define L cout<<"\n"
#define pl pair<ll,ll>
#define INF (unsigned)!((int)0)
#define sortall(a) sort(a.begin(),a.end())
#define rsortall(a) sort(a.begin(), a.end(), greater<ll>());
#define max1(a) *max_element(a.begin(), a.end())
#define min1(a) *min_element(a.begin(), a.end())
 
 //check if an element is present in the vector.
const ll MOD = 1000000007;
 
using namespace std;

 bool checkpresent(vi sorted_vector, int target)
 {
    int n=size(sorted_vector);
    int l=0;int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if (sorted_vector[mid]==target)
        {return true;}
        else if (sorted_vector[mid]>target)
        {
            l=mid;
        }
        else h=mid;
    }
    return false;

 }
 
 

 
void solve()
{
    ll n;cin>>n;
    ll ones=0;
    ll m=0;
    while((n>>m)>0)m++;
    vl indices;
    
    f(i,m)
    {
        if ((n>>i)%2==1) {ones++;indices.push_back(i);}
    }
    // if (m-1==ones||m==ones)
    
        
            if (ones==1)
            {
                cout<<1;L;cout<<n;L;
            }
            else 
            {
                rsortall(indices);

                cout<<ones+1;L;
                
                f(i,ones)
                {
                    cout<<(n-(1LL<<indices[i]))<<" ";
                }
                cout<<n<<" ";
                L;
            }
        
    
    // else
    // {
    //     n=pow(2,m-1)-1;
    //     ones=m-1;
    //     cout<<ones+1;L;
            
    //         for(int i=ones-1;i>=0;i--)
    //         {
    //             cout<<n-pow(2,i)<<" ";
    //         }
    //         cout<<n<<" ";
    //         L;
    // }
    
 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t=1;
    cin>>t;
 
 
    while(t--)
    {
        solve();
    }
}