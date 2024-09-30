#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
vector<pair<pair<int,int>,int>> g;
int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        g.push_back({{a,b},c});
    }
    ll dist[n+1];
    fill(dist,dist+n+1,INT_MAX);
    dist[1]=0;
    for(int i=0;i<n-1;i++)
    {
        for(auto v : g)
        {
            dist[v.first.second]=min(dist[v.first.first]+v.second,dist[v.first.second]);
        }
    }
    vector<int> infi;
    for(int i=0;i<n-1;i++)
    {
        for(auto v : g)
        {
            if(dist[v.first.first]+v.second<dist[v.first.second])
            {
                dist[v.first.second]=dist[v.first.first]+v.second;
                infi.push_back(v.first.second);
            }
        }
    }
    sort(infi.begin(),infi.end());
    int i=0;
    cout<<"check"<<endl;
    for(int j=1;j<=n;j++)
    {
        if(i<infi.size() && j==infi[i])
        {
            cout<<"-infi"<<" ";
            while(i<infi.size() && infi[i]==j)
            {
                i++;
            }
        }
        else cout<<dist[j]<<" ";
    }
    cout<<endl;
}