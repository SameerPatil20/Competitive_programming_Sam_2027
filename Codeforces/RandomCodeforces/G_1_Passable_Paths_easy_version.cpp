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
vector<vector<int>> g;
vector<int> parent;
vector<int> dist;
void dfs(int u,int p)
{
    parent[u]=p;
    dist[u]=dist[p]+1;
    for(int x:g[u])
    {
        if(x!=p)dfs(x,u);
    }
}
int main() {
    int n;
    cin>>n;
    g.resize(n+1);
    dist.resize(n+1);
    parent.resize(n+1);
    rp(n-1)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int q;
    cin>>q;
    for(int l=0;l<q;l++)
    {
        int k;
        cin>>k;
        // cout<<"yo1"<<endl;
        vector<int> v;
        // cout<<"yo2"<<endl;
        dist[0]=0;
        rp(k)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        // cout<<"yo3"<<endl;
        dfs(v[0],0);
        int maxi=0;
        // cout<<"yo"<<endl;
        rp(k)
        {
            // cout<<dist[maxi]<<" "<<dist[v[i]]<<endl;
            if(dist[maxi]<dist[v[i]])
            {
                maxi=v[i];
            }
            // cout<<maxi<<endl;
        }
        // out(dist,n+1," ")
        // cout<<endl;
        // cout<<maxi<<endl;
        dfs(maxi,0);
        int start=maxi;
        vector<pair<int,int>> yo;
        rp(k)
        {
            yo.push_back({dist[v[i]],v[i]});
        }
        sort(yo.begin(), yo.end());
        bool check=1;
        int j=k-1;
        // cout<<"to"<<endl;
        maxi=yo.back().second;
        // cout<<start<<" "<<maxi<<endl;
        while(j>0)
        {
            while(maxi!=0 && maxi!=yo[j].second)
            {
                maxi=parent[maxi];
            }
            if(maxi==0)
            {
                check=0;
                break;
            }
            j--;
        }
        // cout<<"bo"<<endl;
        if(check)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

}