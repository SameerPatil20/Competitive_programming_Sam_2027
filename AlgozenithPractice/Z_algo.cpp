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
    int n = s.length();
    int z[n];
    z[0]=0;
    int i=1;
    int q=0;
    while(i<n)
    {
        while(i+q<n && s[i+q]==s[q])
        {
            q++;
        }
        z[i]=q;
        if(q==0)
        {
            i++;
            continue;
        }
        int temp=i;
        i++;
        while(i<temp+q)
        {
            z[i]=z[i-temp];
            if(z[i]+i>=temp+q)break;
            i++;
        }
        if(i==temp+q)q=0;
        else q=temp+q-i;
    }
    out(z,n," ")
    cout<<endl;

}