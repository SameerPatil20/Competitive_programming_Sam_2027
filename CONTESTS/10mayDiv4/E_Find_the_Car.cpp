#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(ll lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(ll lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(ll lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define v1(type,x) type x;cin>>x;
#define v2(type,x,y) type x,y;cin>>x>>y;
#define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
using namespace std;
int main() {
  ll TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    ll n,k,q;
    cin>>n>>k>>q;
    ll a[k+1];
    ll b[k+1];
    a[0]=0;
    b[0]=0;
    for(int i=1;i<k+1;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<k+1;i++)
    {
        cin>>b[i];
    }
    pair<ll,int> query[q];
    for(int i=0;i<q;i++)
    {
        cin>>query[i].first;
        query[i].second=i;
    }
    sort(query,query+q);
    int i=1,j=0;
    while(j<q)
    {
        while(a[i]<query[j].first)
        {
            i++;
        }
        query[j].first=b[i-1]+((b[i]-b[i-1])*(query[j].first-a[i-1]))/(a[i]-a[i-1]);
        j++;
    }
    sort(query, query+q, [](const pair<ll, int>& a, const pair<ll, int>& b) {
        return a.second < b.second;
    });
    for(int i=0;i<q;i++)
    {
        cout<<query[i].first<<" ";
    }
    cout<<endl;
    
  }
  return 0;
}
// // ll query[]
//     // ll ans[n+1];
//     // ll j=0;
//     // for(int i=1;i<k+1;i++)
//     // {
//     //     while(j<=a[i])
//     //     {
//     //         ans[j]=b[i-1]+((b[i]-b[i-1])*(j-a[i-1]))/(a[i]-a[i-1]);
//     //         j++;
//     //     }
//     // }
//     // for(int i=0;i<q;i++)
//     // {
//     //     ll d;
//     //     cin>>d;
//     //     cout<<ans[d]<<" ";
//     // }
//     // cout<<endl;
// #include <iostream>
// #include <vector>
// #include <map>
// #define ll long long
// using namespace std;
 

// void sameersolver(int ans[],int n,int k,int q,int ax[],int bx[],int queryx[])
// {
//     cin>>n>>k>>q;
//     ll a[k+1];
//     ll b[k+1];
//     a[0]=0;
//     b[0]=0;
//     for(int i=1;i<k+1;i++)
//     {
//         a[i]=ax[i-1];
//     }
//     for(int i=1;i<k+1;i++)
//     {
//         b[i]=bx[i-1];
//     }
//     pair<ll,int> query[q];
//     for(int i=0;i<q;i++)
//     {
//         query[i].first=queryx[i];
//         query[i].second=i;
//     }
//     sort(query,query+q);
//     int i=1,j=0;
//     while(j<q)
//     {
//         while(a[i]<query[j].first)
//         {
//             i++;
//         }
//         query[j].first=b[i-1]+((b[i]-b[i-1])*(query[j].first-a[i-1]))/(a[i]-a[i-1]);
//         j++;
//     }
//     sort(query, query+q, [](const pair<ll, int>& a, const pair<ll, int>& b) {
//         return a.second < b.second;
//     });
//     for(int i=0;i<q;i++)
//     {
//         cout<<query[i].first<<" ";
//     }
// }

// pair<int,int> binary_search(int d,int a[],int k) {
 
// int start=0;
// int end=k-1;
  
// pair<int,int>p;
 
// if(start==0 && end==0) {
// p.first=0;
// p.second=0;
// return p;
// }
 
// if(d<a[0]) {
// p.first=0;
// p.second=0;
// return p;
// }
 
// while((end-start)!=1) {
//     int mid=start + (end-start)/2;
 
//    if(d>=a[mid]) {
//     start=mid;
//     mid=start + (end-start)/2;
//    }
//    if (d<a[mid]) {
//     end=mid;
//     mid=start + (end-start)/2;
//    }
// }
 
// p.first=start;
// p.second=end;
// return p;
// }
 
// void solve(int n,int k,int q,int a[],int b[],int query[]) {
// // int n,k,q;
// // cin>>n>>k>>q;
// // int a[k] , b[k],query[q];
// // for(int i=0;i<k;i++) cin>>a[i];
// // for(int i=0;i<k;i++) cin>>b[i];
// // for(int i=0;i<q;i++) cin>>query[i];
// int ans[q];
// for (int i=0;i<q;i++) {
//     int d=query[i];
//     pair<int,int>p1;
//     p1=binary_search(d,a,k);
   
//    if(p1.first==0 &&p1.second==0) {
//     double distance=d;
//     double speed=((double)a[p1.first])/b[p1.first];
//     double time=d/speed;
//     cout << (int)time <<" " ;
//    }
//    else {
    
//     double distance=d-a[p1.first];
//     double speed=(((double)(a[p1.second]-a[p1.first]))/(b[p1.second]-b[p1.first]));
//     double time=distance/speed;
//     ans[i]=(int) (time+b[p1.first]);
//    }
//    int acans[q];
//     sameersolver(coans,n,k,q,a,b,query);
// }
 
// }
 
 
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll int t;
//     cin >> t;
//     while (t--) {
//         int n,k,q;
//         n=1+rand()%10;
//         k=1+rand()%n;
//         q=n+1;
//         set<int> dis;
//         while(dis.size()<k-1){
//             dis.insert(1+rand()%(n-1));
//         }
//         dis.insert(n);
//         set<int> times;
//         while(times.size()<k)
//         {
//             times.insert(1+rand()%100);
//         }
//         int dist[k];
//         int ti[k];
//         for(int i=0;i<k;i++)
//         {
//             dist[i]=*dis.begin();
//             dis.erase(dis.begin());
//             ti[i]=*times.begin();
//             times.erase(times.begin());
//         }
//         int query[n+1];
//         for(int i=0;i<=n;i++)
//         {
//             query[i]=i;
//         }
//         solve(n,k,q,dist,ti,query);
//     }
//     return 0;
// }