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
//     int n,q;
//     cin>>n>>q;
//     int pa[n];
//     ain(pa,n-1);
//     int a[n];
//     ain(a,n)
//     int bug[n-1];
//     int count=0;
//     rp(n-1)
//     {
        
//         if(min(a[i],a[i+1])==max(a[i],a[i+1])/2)bug[i]=0;
//         else 
//         {
//             bug[i]=1;
//             count++;
//         }
//     }
//     while(q--)
//     {
//         // cout<<TestCases<<endl;
//         int x,y;
//         cin>>x>>y;
//         x--;
//         y--;
//         int err=0;
//         if(x<n-1 && bug[x])err--;
//         if(x>0 && bug[x-1])err--;
//         if(y<n-1 && bug[y])err--;
//         if(y>0 && bug[y-1])err--;
//         swap(a[x],a[y]);
//         if(x<n-1 && min(a[x],a[x+1])==max(a[x],a[x+1])/2)
//         {
//             bug[x]=0;
//         }
//         else
//         {
//             bug[x]=1;
//             err++;
//         }
//         if(x>0 && min(a[x],a[x-1])==max(a[x],a[x-1])/2)
//         {
//             bug[x-1]=0;
//         }
//         else
//         {
//             bug[x-1]=1;
//             err++;
//         }
//         if(y<n-1 && min(a[y],a[y+1])==max(a[y],a[y+1])/2)
//         {
//             bug[y]=0;
//         }
//         else
//         {
//             bug[y]=1;
//             err++;
//         }
//         if(y>0 && min(a[y],a[y-1])==max(a[y],a[y-1])/2)
//         {
//             bug[y-1]=0;
//         }
//         else
//         {
//             err++;
//             bug[y-1]=1;
//         }
//         count+=err;
//         out(bug,n-1," ")
//         cout<<endl;
//         if(count==(n-1)/2)
//         {
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }

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
    int n,q;
    cin>>n>>q;
    
  }
  return 0;
}