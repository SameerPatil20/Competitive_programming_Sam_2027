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
    int n,m;
    cin >> n >> m;
    int a[n][m];
    map<int,pair<int,int>> ap;
    map<int,pair<int,int>> bp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            cin >> a[i][j];
            ap[a[i][j]]=make_pair(i,j);
        }
    }
    int b[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            cin >> b[i][j];
            bp[b[i][j]]=make_pair(i,j);
        }
    }
    if(n==1 || m==1)
    {
        cout<<"YES"<<endl;
        continue;
    }
    bool check=1;
    // cout<<bp[5].first<<" "<<bp[5].second<<endl;

    for(int i=0;i<n;i++)
    {
        if(bp[a[i][0]].first==bp[a[i][1]].first)
        {
            int te=bp[a[i][0]].first;
            for(int j=0; j<m; j++)
            {
                if(te!=bp[a[i][j]].first)
                {
                    check=0;
                    break;
                }
            }
        }
        // else if(bp[a[i][0]].second==bp[a[i][1]].second)
        // {
        //     int te=bp[a[i][0]].second;
        //     for(int j=0; j<m; j++)
        //     {
        //         if(te!=bp[a[i][j]].second)
        //         {
        //             check=0;
        //             break;
        //         }
        //     }
        // }
        else check=0;
        if(check==0)break;
    }
    if(check==0)
    {
        cout<<"NO"<<endl;
        continue;
    }
    for(int i=0;i<m;i++)
    {
        // cout<<bp[a[0][i]].first<<" "<<bp[a[1][i]].first<<endl;
        // cout<<bp[a[0][i]].second<<" "<<bp[a[1][i]].second<<endl;
        // if(bp[a[0][i]].first==bp[a[1][i]].first)
        // {
        //     int te=bp[a[0][i]].first;
        //     for(int j=0; j<n; j++)
        //     {
        //         if(te!=bp[a[j][i]].first)
        //         {
        //             check=0;
        //             break;
        //         }
        //     }
        // }
        if(bp[a[0][i]].second==bp[a[1][i]].second)
        {
            int te=bp[a[0][i]].second;
            for(int j=0; j<n; j++)
            {
                if(te!=bp[a[j][i]].second)
                {
                    check=0;
                    break;
                }
            }
        }
        else check=0;
        if(check==0)break;
    }
    if(check==0)
    {
        cout<<"NO"<<endl;
        continue;
    }
    else{
        cout<<"YES"<<endl;
        continue;
    }


  }
  return 0;
}