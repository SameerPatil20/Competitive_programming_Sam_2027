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
//     int n;
//     cin >> n;
//     int a,b;
//     cin>>a>>b;
//     int visited[n+1];
//     set(visited,n+1,0);
//     if(a!=b)visited[a]=1;
//     else visited[a]=2;
//     vector<vector<int>> tree(n + 1);
//     for (int i = 0; i < n - 1; ++i) {
//         int x, y;
//         cin >> x >> y;
//         tree[x].push_back(y);
//         tree[y].push_back(x);
//     }

//   }
//   return 0;
// }
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <tuple>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<vector<int>> tree(n + 1);
        for (int i = 0; i < n - 1; ++i) {
            int x, y;
            cin >> x >> y;
            tree[x].push_back(y);
            tree[y].push_back(x);
        }

        queue<tuple<int, int, int>> q;  // (PA's position, PB's position, step count)
        unordered_set<int> red;
        unordered_set<int> blue;
        
        q.emplace(a, b, 0);
        red.insert(a);
        if (a == b) blue.insert(a);

        while (!q.empty()) {
            auto [pa, pb, steps] = q.front();
            q.pop();

            // Move PA and paint red
            vector<int> next_pa_positions;
            for (int new_pa : tree[pa]) {
                if (red.find(new_pa) == red.end()) {
                    red.insert(new_pa);
                    next_pa_positions.push_back(new_pa);
                }
            }

            // Move PB and paint blue
            vector<int> next_pb_positions;
            for (int new_pb : tree[pb]) {
                if (red.find(new_pb) != red.end() && blue.find(new_pb) == blue.end()) {
                    blue.insert(new_pb);
                    next_pb_positions.push_back(new_pb);
                    if (blue.size() == n) {
                        cout << steps + 1 << endl;
                        goto next_case;
                    }
                }
            }

            // Enqueue new states
            for (int new_pa : next_pa_positions) {
                for (int new_pb : next_pb_positions) {
                    q.emplace(new_pa, new_pb, steps + 1);
                }
            }
        }
        next_case:;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
