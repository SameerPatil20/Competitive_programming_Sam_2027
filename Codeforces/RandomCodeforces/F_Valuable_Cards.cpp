#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int segment=1;
        map<int,int> mp;
        mp[x]=1;
        for(int i=0;i<n;i++)
        {
            for(auto j:mp)
            {
                if(a[i]==j.first)
                {
                    // cout<<i<<endl;
                    segment++;
                    i--;
                    mp.clear();
                    mp[x]=1;
                    break;
                }
                if(j.first%a[i]==0)
                {
                    mp[j.first/a[i]]=1;
                }
            }
        }
        cout<<segment<<endl;

    }
}