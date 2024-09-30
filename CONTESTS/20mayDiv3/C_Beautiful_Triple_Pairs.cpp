// // #include<bits/stdc++.h>
// // #define rp(n) for(decltype(n) i=0;i<n;i++)
// // #define rp2(n,j) for(decltype(n) j=0;j<n;j++)
// // #define ll long long int
// // #define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
// // #define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
// // #define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
// // #define v1(type,x) type x;cin>>x;
// // #define v2(type,x,y) type x,y;cin>>x>>y;
// // #define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
// // #define endl '\n'
// // using namespace std;

// // // int countMatchesInW(const vector<vector<int>>& w, const vector<int>& target) {
// // //     auto range = equal_range(w.begin(), w.end(), target,
// // //         [](const vector<int>& a, const vector<int>& b) {
// // //             // Compare based on second and third terms
// // //             if (a[1] != b[1]) {
// // //                 return a[1] < b[1];
// // //             } else {
// // //                 return a[2] < b[2];
// // //             }
// // //         });

// // //     int count = 0;
// // //     for (auto it = range.first; it != range.second; ++it) {
// // //         if ((*it)[0] != target[0]) {
// // //             count++;
// // //         }
// // //     }
// // //     return count;
// // // }
// // // int countMatchesInq(const vector<vector<int>>& w, const vector<int>& target) {
// // //     auto range = equal_range(w.begin(), w.end(), target,
// // //         [](const vector<int>& a, const vector<int>& b) {
// // //             // Compare based on second and third terms
// // //             if (a[0] != b[0]) {
// // //                 return a[0] < b[0];
// // //             } else {
// // //                 return a[1] < b[1];
// // //             }
// // //         });

// // //     int count = 0;
// // //     for (auto it = range.first; it != range.second; ++it) {
// // //         if ((*it)[2] != target[2]) {
// // //             count++;
// // //         }
// // //     }
// // //     return count;
// // // }
// // // int countMatchesIne(const vector<vector<int>>& w, const vector<int>& target) {
// // //     auto range = equal_range(w.begin(), w.end(), target,
// // //         [](const vector<int>& a, const vector<int>& b) {
// // //             // Compare based on second and third terms
// // //             if (a[2] != b[2]) {
// // //                 return a[2] < b[2];
// // //             } else {
// // //                 return a[0] < b[0];
// // //             }
// // //         });

// // //     int count = 0;
// // //     for (auto it = range.first; it != range.second; ++it) {
// // //         if ((*it)[1] != target[1]) {
// // //             count++;
// // //         }
// // //     }
// // //     return count;
// // // }
// // int main() {
// //   int TestCases;
// //   cin >> TestCases;
// //   while (TestCases--)
// //   {

// //     // int n;
// //     // cin >> n;
// //     // int a[n];
// //     // ain(a, n);
// //     // vector<vector<int>> v;
// //     // for(int i=0;i<n-2;i++)
// //     // {
// //     //     vector<int> c;
// //     //     c.push_back(a[i]);
// //     //     c.push_back(a[i+1]);
// //     //     c.push_back(a[i+2]);
// //     //     v.push_back(c);
// //     // }
// //     // vector<vector<int>> q=v;
// //     // vector<vector<int>> w=v;
// //     // vector<vector<int>> e=v;
// //     // auto customComparator = [](const vector<int>& vec1, const vector<int>& vec2) {
// //     //     if (vec1[1] != vec2[1]) {
// //     //         return vec1[1] < vec2[1];
// //     //     } else if (vec1[2] != vec2[2]) {
// //     //         return vec1[2] < vec2[2];
// //     //     } else {
// //     //         return vec1[0] < vec2[0];
// //     //     }
// //     // };
// //     // sort(w.begin(), w.end(), customComparator);
// //     // auto customComparator2 = [](const vector<int>& vec1, const vector<int>& vec2) {
// //     //     if (vec1[2] != vec2[2]) {
// //     //         return vec1[2] < vec2[2];
// //     //     } else if (vec1[0] != vec2[0]) {
// //     //         return vec1[0] < vec2[0];
// //     //     } else {
// //     //         return vec1[1] < vec2[1];
// //     //     }
// //     // };
// //     // sort(e.begin(), e.end(), customComparator2);
// //     // sort(q.begin(), q.end());
// //     // int count=0;
// //     // for(int i=0;i<v.size();i++)
// //     // {
// //     //     count+=countMatchesIne(e,v[i]);
// //     //     count+=countMatchesInq(q,v[i]);
// //     //     count+=countMatchesInW(w,v[i]);
// //     // }
// //     // cout<<count/2<<endl;
// //     int n;
// //     cin>>n;
// //     int a[n]; 
// //     vector<vector<int>> v;
// //     rp(n)
// //     {
// //         cin>>a[i];
// //         if(i>1)
// //         {
// //             vector<int> c;
// //             c.push_back(a[i-2]);
// //             c.push_back(a[i-1]);
// //             c.push_back(a[i]);
// //             v.push_back(c);
// //         }
// //     }
// //     sort(v.begin(), v.end());
// //     int count=0;
// //     for(int i=0;i<v.size();i++)
// //     {
// //         for(int j=i+1;j<v.size();j++)
// //         {
// //             if(v[j][0]==v[i][0] && v[j][1]==v[i][1] && v[j][2]!=v[i][2])count++;
            
// //             if(v[j][2]==v[i][2] && v[j][1]==v[i][1] && v[j][0]!=v[i][0])count++;
            
// //             if(v[j][0]==v[i][0] && v[j][2]==v[i][2] && v[j][1]!=v[i][1])count++;
// //         }
// //     }
// //     cout<<count<<endl;
// //   }
// //   return 0;
// // }
// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// long long countBeautifulPairs(const vector<int>& a) {
//     int n = a.size();
//     unordered_map<long long, long long> frequency;
//     long long beautifulPairs = 0;

//     for (int i = 1; i < n - 1; i++) {
//         long long tripleHash = 1LL * a[i] * 1e12 + 1LL * a[i + 1] * 1e6 + a[i + 2];
//         frequency[tripleHash]++;
//     }

//     for (auto& it : frequency) {
//         long long count = it.second;
//         beautifulPairs += count * (count - 1) / 2;
//     }

//     return beautifulPairs;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         cout << countBeautifulPairs(a) << endl;
//     }

//     return 0;
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
    ain(a,n);
    ll count=0;
    map <pair<pair<int,int>,int>,int> mp;
    for(int i=0; i<n-2; i++)
    {
        mp[{{a[i],a[i+1]},a[i+2]}]++;
        count+=mp[{{-1,a[i+1]},a[i+2]}]+mp[{{a[i],-1},a[i+2]}]+mp[{{a[i],a[i+1]},-1}];
        mp[{{-1,a[i+1]},a[i+2]}]++;
        mp[{{a[i],-1},a[i+2]}]++;
        mp[{{a[i],a[i+1]},-1}]++;
        count-=3*(mp[{{a[i],a[i+1]},a[i+2]}]-1);
    }
    cout<<count<<endl;
  }
  return 0;
}