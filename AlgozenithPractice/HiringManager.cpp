#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int main()
{
    int n,h,s,t;
    cin>>n>>h>>s>>t;
    int a[n];
    ain(a,n)
    int working=0;
    int cost=0;
    vector <int> rem;
    for(int i=0;i<n;i++)
    {
        // cout<<"month "<<i<<" "<<working<<" "<<a[i]<<endl;
        if(a[i]<=working)
        {
            cost+=a[i]*s;
            for(int j=0;j<working-a[i];j++)
            {
                rem.push_back(i);
            }
            working=a[i];
        }
        else if(a[i]>working)
        {
            
            while(working<a[i] && rem.size()!=0)
            {
                if(s*(i-rem.back())<=h+t)
                {
                    cost+=s*(i-rem.back());
                    working++;
                    rem.pop_back();
                }
                else{
                    break;
                }
            }
            if(working<a[i])
            {
                cost+=h*(a[i]-working);
                working=a[i];
            }
            cost+=a[i]*s;
        }
        // cout<<"monthEnd "<<i<<" "<<working<<" "<<a[i]<<" "<<cost<<endl;
        // out(rem,rem.size()," ")
        // cout<<endl;
    }
    cost+=(rem.size()+working)*t;
    // out(rem,rem.size()," ")
    // cout<<endl;
    cout<<cost<<endl;
}