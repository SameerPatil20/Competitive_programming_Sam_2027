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
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> v;
//     v.assign(n+1,vector<int>(11,0));
//     rp(m)
//     {
//         int a,d,k;
//         cin>>a>>d>>k;
//         v[a][d]=max(v[a][d],k);
//     }
//     vector<int> vc;
//     vc.push_back(0);
//     int component=0;
//     for(int i=1;i<=10;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(v[j][0]==0)
//             {
//                 if(v[j][i]>0)
//                 {
//                     // cout<<"p "<<i<<j<<endl;
//                     component++;
//                     vc.push_back(0);
//                     v[j][0]=component;
//                     if(v[j+i][0]!=0 && v[j+i][0]!=v[j][0])vc[v[j][0]]=v[j+i][0];
//                     if(v[j+i][0]==0)v[j+i][0]=v[j][0];
//                     v[j+i][i]=max(v[j+i][i],v[j][i]-1);
//                 }
//             }
//             else{
//                 if(v[j][i]>0)
//                 {
//                     if(v[j+i][0]!=0 && v[j+i][0]!=v[j][0])vc[v[j][0]]=v[j+i][0];
//                     if(v[j+i][0]==0)v[j+i][0]=v[j][0];
//                     v[j+i][i]=max(v[j+i][i],v[j][i]-1);
//                 }
//             }
//         }
//         // out(vc,vc.size()," ")
//         // cout<<endl;
//     }
//     int counter=0;
//     rp(n)
//     {
//         if(v[i+1][0]==0)counter++;
//     }
//     // out(vc,vc.size()," ")
//     // cout<<endl;
//     for(int i=1;i<vc.size();i++)
//     {
        
//         if(vc[i]==0)counter++;
//     }
//     cout<<counter<<endl;
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
struct UnionFind{
    int n,set_size,*parent,*rank;
    UnionFind(){}
    UnionFind(int a)
    {
        n=set_size=a;
        parent= new int[n+1];
        rank=new int [n+1];
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
            rank[i]=1;
        }
    }
    int find(int x)
    {
        if(x!=parent[x])return parent[x]=find(parent[x]);
        return x;
    }
    void merge(int x,int y)
    {
        x=find(x);
        y=find(y);
        if(x==y)return;
        if(rank[x]>=rank[y])
        {
            parent[y]=x;
            rank[x]+=rank[y];
        }
        else{
            parent[x]=y;
            rank[y]+=rank[x];
        }
        set_size--;
    }
};
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n,m;
    cin>>n>>m;
    UnionFind uf(n);
    vector<vector<int>> v(n+1,vector<int>(11,0));
    rp(m)
    {
        int a,d,k;
        cin>>a>>d>>k;
        v[a][d]=max(v[a][d],k);
    }
    for(int i=1;i<11;i++)
    {
        for(int j=1;j<=n;j++)
        {
            // cout<<i<<" "<<j<<endl;
            cout.flush();
            if(v[j][i]>0)
            {
                uf.merge(j,j+i);
                v[j+i][i]=max(v[j+i][i],v[j][i]-1);
            }
        }
    }
    cout<<uf.set_size<<endl;
  }
  return 0;
}