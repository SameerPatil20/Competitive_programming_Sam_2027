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
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    // int n;
    // cin>>n;
    // int a[n];
    // ain(a,n)
    // ll osum=0;
    // ll esum=0;
    // vector<pair<int,int>> maxi;
    // vector<pair<int,int>> duplicate;
    // vector<pair<int,int>> mini;

    // for(int i=1;i<n-1;i++)
    // {
    //     int y=max(a[i-1]-a[i],a[i+1]-a[i]);
    //     if(i%2==1)
    //     {
    //         osum+=y;
    //         mini.push_back({y,i});
    //     }
    //     else 
    //     {
    //         esum+=y;
    //         maxi.push_back({y,i});
    //     }
        
    // }

    // int wh=0;
    // if(osum<esum)
    // {
    //     wh=1;
    //     for(int i=0;i<n/2-1;i++)
    //     {
    //         swap(maxi[i],mini[i]);
    //     }
    // }
    // if(osum==esum &&a[0]<a[n-1])
    // {
    //     wh=1;
    //     for(int i=0;i<n/2-1;i++)
    //     {
    //         swap(maxi[i],mini[i]);
    //     }
    // }
    // // cout<<wh<<endl;
    // // mini.push_back({a[1]-a[0],0});
    // // mini.push_back({a[n-2]-a[n-1],n-1});
    // sort(maxi.begin(),maxi.end());
    // int give=n;
    // int answer[n];
    // for(int i=maxi.size()-1; i>=0; i--)
    // {
    //     answer[maxi[i].second]=give;
    //     give--;
    // }
    // if(maxi[0].second%2==0)
    // {
    //     answer[0]=give;
    //     mini.push_back({a[n-2]-a[n-1],n-1});
    // }
    // else 
    // {
    //     answer[n-1]=give;
    //     mini.push_back({a[1]-a[0],0});
    // }
    // for(int j=0;j<mini.size();j++)
    // {
    //     int i=mini[j].second;
    //     mini[j].first=min(a[i-1]-a[i],a[i+1]-a[i]);
    // }
    // sort(mini.begin(),mini.end());

    // give=1;
    // for(int i=0; i<mini.size(); i++)
    // {
    //     answer[mini[i].second]=give;
    //     give++;
    // }
    // out(answer,n," ")
    // cout<<endl;
    int n; cin>>n;
        vector<pair<int, int>> pe(n/2), po(n/2);
        vector<int> q(n);
        bool _1ine;
        rp(n)
        {
            int x; cin>>x;
            if(x == 1)_1ine = (i%2 == 0);
            if(i%2==0)pe[i/2] = {x, i};
            else po[i/2] = {x, i};
        }
        sort(pe.begin(),pe.end()); sort(po.begin(),po.end());
        if(!_1ine)
        {
            rp(n/2)
            {
                q[pe[i].second] = n - i;
            }
            rp(n/2)
            {
                q[po[i].second] = n/2 - i;
            }
        }
        else
        {
            rp(n/2)
            {
                q[po[i].second] = n - i;
            }
            rp(n/2)
            {
                q[pe[i].second] = n/2 - i;
            }
        }
        rp(n)cout<<q[i]<<" ";
        cout<<endl;

  }
  return 0;
}