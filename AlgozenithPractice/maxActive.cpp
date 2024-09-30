#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
bool compare(const pair<pair<ll,ll>, int>& a, const pair<pair<ll,ll>, int>& b) {
    if (a.first.first != b.first.first) {
        return a.first.first < b.first.first;
    }
    return a.second > b.second;
}
int main()
{
    int n,q;
    cin>>n>>q;
    vector<pair<pair<ll,ll>,int>> v;
    for(int i=0;i<n;i++)
    {
        ll l,r,x;
        cin>>l>>r>>x;
        v.push_back({{l,x},1});
        v.push_back({{r,x},-1});
    }
    for(int i=0;i<q;i++)
    {
        ll y;
        cin>>y;
        v.push_back({{y,i},0});
    }
    ll answer[n];
    sort(v.begin(),v.end(),compare);
    multiset<int, greater<int> > value;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].second==1)
        {
            value.insert(v[i].first.second);
        }
        else if(v[i].second==0)
        {
            if(value.size()!=0)
            {
                answer[v[i].first.second] = *value.begin();
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            value.erase(value.find(v[i].first.second));
        }
    }
    out(answer,n," ")
}