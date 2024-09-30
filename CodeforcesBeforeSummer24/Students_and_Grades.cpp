#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int m,n;     //m=size of sec A
        cin>>m>>n;   //m=size of sec B
        map<int,int> mp;
        int marks;
        for(int i=0;i<m;i++)
        {
            cin>>marks;
            mp[marks]++;
        }    
        for(int i=0;i<n;i++)
        {
            cin>>marks;
            if(mp[marks]>0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            mp[marks]++;
        }
        t--;
    }
}
