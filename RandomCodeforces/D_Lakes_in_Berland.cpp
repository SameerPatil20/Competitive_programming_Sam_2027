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
int n,m,k;
char a[55][55];
bool v[55][55];
int dfs(int i,int j)
{
    // cout<<" "<<i<<" "<<j<<endl;
    
    int allclear=1;
    if(i==0 || j==0 || i==n-1 || j==m-1)allclear+= 1e4;
    v[i][j]=1;
    if(a[i][j-1]=='.' && v[i][j-1]==0)
    {
        allclear+=dfs(i,j-1);
    }
    if(a[i-1][j]=='.' && v[i-1][j]==0)
    {
        allclear+=dfs(i-1,j);
    }
    if(a[i][j+1]=='.' && v[i][j+1]==0)
    {
        allclear+=dfs(i,j+1);
    }
    if(a[i+1][j]=='.' && v[i+1][j]==0)
    {
        allclear+=dfs(i+1,j);
    }
    // cout<<allclear<<" "<<i<<" "<<j<<endl;
    return allclear;
}
void ddfs(int i,int j)
{
    v[i][j]=0;
    if(a[i][j-1]=='.' && v[i][j-1]==1)
    {
        ddfs(i,j-1);
    }
    if(a[i-1][j]=='.' && v[i-1][j]==1)
    {
        ddfs(i-1,j);
    }
    if(a[i][j+1]=='.' && v[i][j+1]==1)
    {
        ddfs(i,j+1);
    }
    if(a[i+1][j]=='.' && v[i+1][j]==1)
    {
        ddfs(i+1,j);
    }
    // cout<<i<<" "<<j<<endl;
    a[i][j]='*';
}
int main() {
  cin>>n>>m>>k;
  rp(n)
  {
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
        v[i][j]=0;
    }
  }
  vector<pair<int,pair<int,int>>> vo;
  int count=0;
  rp(n)
  {
    for(int j=0;j<m;j++)
    {
        if(a[i][j]=='.' && !v[i][j])
        {   
            int x=dfs(i,j);
            if(x<1e4)
            {vo.push_back({x,{i,j}});
            count++;}
        }
    }
  }
//   cout<<count<<endl;

  int ans = 0;
  sort(vo.begin(),vo.end());
//   rp(count)
//   {
//     cout<<vo[i].first<<" "<<vo[i].second.first<<" "<<vo[i].second.second<<endl;
//   }
  for(int i=0;i<count-k;i++)
  {
    ans+=vo[i].first;
    ddfs(vo[i].second.first,vo[i].second.second);
  }
  cout<<ans<<endl;
  rp(n)
  {
    for(int j=0;j<m;j++)
    {
        cout<<a[i][j];
    }
    cout<<endl;
  }

}