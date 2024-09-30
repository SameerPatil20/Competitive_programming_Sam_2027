#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int z[n];
    z[0]=0;
    int center=-1;
    int r=-1;
    int i=1;
    int maxi=-1;
    while(i<n)
    {
        if(i>r)
        {
            z[i]=0;
            while(i+z[i]<n && s[i+z[i]]==s[z[i]])
                z[i]++;
            center=i;
            r=i+z[i]-1;
        }
        else
        {
            z[i]=z[i-center];
            if(z[i]+i>=r)
            {
                z[i]=r-i;
                while(i+z[i]<n && s[i+z[i]]==s[z[i]])
                    z[i]++;
                center=i;
                r=i+z[i]-1;
            }
        }
        if(z[i]+i==n && maxi>=z[i])
        {
            while(i<n)
            {
                cout<<s[i];
                i++;
            }
            cout<<endl;
            return 0;
        }
        else maxi=max(z[i],maxi);
        i++;
    }
    cout<<-1<<endl;
    
}