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
    int n;
    cin>>n;
    int dig=0;
    string ns=to_string(n);
    dig=ns.size();
    vector<pair<int,int>> v;
    // cout<<"dig "<<dig<<endl;
    for(int i=1;i<=10000;i++)
    {
        // cout<<"bo "<<i<<endl;
        int minb=dig*i-6;
        int maxb=dig*i-1;
        for(int j=minb; j<=maxb; j++)
        {
            
            string s="";
            // if(i==219 && j==216)cout<<dig*i-j<<endl;
            for(int k=0;k<dig*i-j;k++)
            {
                // if(i==20 && j==18)cout<<s<<endl;
                s+=ns[k%dig];
            }
            // if(i==219 && j==216)cout<<s<<endl;
            if(to_string(n*i-j)==s)
            {
                v.push_back({i,j});
            }
        }
    }
    cout<<v.size()-1<<endl;
    for(int i=1;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
  }
  return 0;
}