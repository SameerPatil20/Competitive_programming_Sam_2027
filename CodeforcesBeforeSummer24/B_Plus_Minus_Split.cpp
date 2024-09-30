#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char q;
        int ans=0;
        for(int j=0;j<n;j++)
        {
        cin>>q;
        if(q=='+') ans++;
        else ans--;
        }
        cout<<abs(ans)<<endl;
    }
}