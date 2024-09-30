#include<iostream>
#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n;
    cin>>n;
    int a[n-1];
    rp(n-1)
    {
        cin>>a[i];
    }
    int type[n];
    char c;
    vector<int>idc;
    rp(n)
    {
        cin>>c;
        if(c=='P')type[i]=1;
        else if(c=='S')type[i]=-1;
        else
        {
            type[i]=0;
            idc.push_back(i+1);
        }
    }
    int answer=0;
    map< int , pair< pair< int , int > , vector<int> > >mp;
    rp(n-1)
    {
        if(type[i+1]==1 && type[a[i]-1]==-1)answer++;
        else if(type[i+1]==-1 && type[a[i]-1]==1)answer++;
        else if(type[i+1]==1 && type[a[i]-1]==0)
        {
            mp[a[i]].first.first++;
        }
        else if(type[i+1]==-1 && type[a[i]-1]==0)
        {
            mp[a[i]].first.second++;
        }
        else if(type[i+1]==0 && type[a[i]-1]==1)
        {
            mp[i+2].first.first++;
        }
        else if(type[i+1]==0 && type[a[i]-1]==-1)
        {
            mp[i+2].first.second++;
        }
        else if(type[i+1]==0 && type[a[i]-1]==0)
        {
            mp[i+2].second.push_back(a[i]);
            mp[a[i]].second.push_back(i+2);
        }
    }
    for(int i=0;i<idc.size();i++)
    {
        if(mp[idc[i]].second.size()==0)answer+=min(mp[idc[i]].first.first,mp[idc[i]].first.second);
        if(mp[idc[i]].second.size()==1)
        {
            answer+=min(mp[idc[i]].first.first,mp[idc[i]].first.second);
            if(mp[idc[i]].first.first>mp[idc[i]].first.second)mp[mp[idc[i].second[0]]].first.first++;

        }
    }
    cout<<answer<<endl;
  }
  return 0;
}