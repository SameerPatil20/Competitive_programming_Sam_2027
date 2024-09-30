#include<bits/stdc++.h>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases>0)
  {
    int n,x,y;
    cin>>n>>x>>y;
    int u=y;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    sort(a,a+x);
    vector<int> even;
    vector<int> odd;
    int count=0;
    for(int i=0 ;i<x-1;i++)
    {
        if(a[i+1]-a[i]==2)count++;
        else if(y>0)
        {
            int w=a[i+1]-a[i];
            if(w%2==0)
            {
                even.push_back(w/2);
            }
            else
            {
                odd.push_back(w/2);
            }
        }
    }
    if(n+a[0]-a[x-1]==2){count++;}
    else if(y>0)
    {
        int w=n+a[0]-a[x-1];
        if(w%2==0)
        {
            even.push_back(w/2);
        }
        else
        {
            odd.push_back(w/2);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    int d=0;
    while(y>0 && d<even.size())
    {
        if(y>=even[d]-1)
        {
            count+=even[d];
            y-=even[d]-1;
        }
        else 
        {
            break;
        }
        d++;
    }
    int e=0;
    while(y>0 && e<odd.size())
    {
        count+=min(y,odd[e]);
        y-=min(y,odd[e]);
        e++;
    }
    while(y>0 && d<even.size())
    {
        count+=min(y,even[d]);
        y-=min(y,even[d]);
        e++;
    }
    y=u-y;
    count+=min(x-2+y,n-2);
    cout<<count<<"\n";
    TestCases--;
  }
  return 0;
}
