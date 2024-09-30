#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int main()
{
    int n;
    cin>>n;
    map <char,int> mp;
    string s;
    cin>>s;
    int count=1;
    for(int i=0; i<n;i++)
    {
        if(mp[s[i]]!=0)
        {
            int x=mp[s[i]];
            mp[s[i]]=count-x;
            count+=count-x;
        }
        else{
            mp[s[i]]=count;
            count+=count;
        }
    }
    cout<<count-1<<endl;
}