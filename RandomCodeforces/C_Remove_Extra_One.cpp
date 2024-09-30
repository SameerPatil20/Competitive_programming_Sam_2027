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
// bool customComparator(const std::pair<int, int>& a, const std::pair<int, int>& b) {
//     if (a.first == b.first) {
//         return a.second > b.second; // For ties, sort in decreasing order of second
//     }
//     return a.first < b.first; // Otherwise, sort in increasing order of first
// }

// void printNGE(int arr[], int n,int arrout[])
// {
//     deque<pair<int,int>> s;
 
//     /* push the first element to stack */
//     s.push_back({arr[0],0});
 
//     // iterate for rest of the elements
//     for (int i = 1; i < n; i++) {
 
//         if (s.empty()) {
//             s.push_back({arr[i],i});
//             continue;
//         }
//         while(s.size()>1 && arr[i]<arr[i-1])
//         {
//             arrout[s.front().second]=i-1;
//             s.pop_front();
//         }
//         while (s.empty() == false && (s.back().first < arr[i] /*|| (i-1!=s.top().second+1 && arr[i-1]>arr[i-2])*/)) {
//             arrout[s.back().second]=i-1;
//             s.pop_back();
//         }
        
//         s.push_back({arr[i],i});
//     }
//     while (s.empty() == false) {
//         arrout[s.back().second]=n-1;
//         s.pop_back();
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     ain(a, n);

//     if(n==1)
//     {
//         cout<<a[0]<<endl;
//         return 0;
//     }
//     int arrout[n];
//     printNGE(a, n,arrout);
//     int dataset[n][5];
//     int maxi=0;
//     for(int i=0;i<n;i++)
//     {
//         dataset[i][3]=maxi;
//         maxi=max(maxi,a[i]);
//         if(maxi==a[i])dataset[i][4]=1;
//         else dataset[i][4]=0;
//     }
//     pair <int,int> maxii={0,0};
//     int mini=0;
//     for(int i=n-1;i>=0;i--)
//     {
//         dataset[i][0]=mini;
//         dataset[i][1]=maxii.first;
//         dataset[i][2]=maxii.second;
//         mini=min(mini,a[i]);
//         if(maxii.first<a[i])
//         {
//             maxii.first=a[i];
//             maxii.second=i;
//         }
//     }
//     vector<pair<int,int>>possible;
//     for(int i=0;i<n;i++)
//     {
//         if(i==0)
//         {
//             if(a[1]<a[0])
//             {
//                 possible.push_back({arrout[i]-i-dataset[i][4],a[i]});
//             }
//             else{
//                 possible.push_back({-dataset[i][4],a[i]});
//             }
//         }
//         else if(i==n-1)
//         {
//             possible.push_back({-dataset[i][4],a[i]});
//         }
//         else{
//             if(dataset[i][0]>dataset[i][3])
//             {
//                 possible.push_back({arrout[i]-i-dataset[i][4],a[i]});
//             }
//             else{
//                 possible.push_back({-dataset[i][4],a[i]});
//             }
//         }
//     }
//     sort(possible.begin(), possible.end(),customComparator);
//     cout<<possible.back().second << endl;
//     for(int i=0;i<possible.size();i++)
//     {
//         cout<<possible[i].first<<" "<<possible[i].second<<endl;;
//     }
//      out(arrout,n," ")
//     // cout<<endl;
//   return 0;
// }
int main()
{
    int n;
    cin >> n;
    int a[n];
    int r[n+1];
    memset(r,0,sizeof(r));
    int maxi=0;
    int secondmaxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxi)
        {
            secondmaxi=maxi;
            maxi=a[i];
        }
        else if(a[i]>secondmaxi)
        {
            secondmaxi=a[i];
            r[maxi]++;
        }
        if(a[i]==maxi)
        r[a[i]]--;
    }
    // out(r,n+1," ")
    // cout<<endl;
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        if(r[i]>r[ans])ans=i;
    }
    cout<<ans<<endl;
}