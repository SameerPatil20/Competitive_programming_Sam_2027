#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n,x,y;
    cin>>n>>x>>y;
    ll int ans=0;
    map<int,vector<int>> z;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        z[a%y].push_back(a%x);
    }
    rp(y)
    {
        if(z[i].size()==0)continue;
        map<int,int> u;
        for(int j=0;j<z[i].size();j++)
        {
            u[z[i][j]]++;
        }


        for(int g=0;g<z[i].size();g++)
        {
            if(u[x-z[i][g]]==0)
            {
                u.erase(x-z[i][g]);
                continue;
            }
            if(x%2==0 && z[i][g]==x/2)
            {
                ans+=u[x-z[i][g]]-1;
            }
            else ans+=u[x-z[i][g]];
        }
        ans+=u[0]*(u[0]-1);
    }
    cout<<ans/2<<endl;
  }
  return 0;
}