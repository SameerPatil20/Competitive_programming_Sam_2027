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
    string a="";
    for(int i=0;i<n-1;i++)
    {
        a+=s[i];
        a+='.';
    }
    a+=s[n-1];
    n=2*n-1;
    int pali[n];
    int center=0;
    int i=0;
    int q=1;
    // cout<<n<<endl;
    while(i<n)
    {
        // cout<<i<<" "<<q<<" "<<center<<endl;
        while(i-q>=0 && i+q<n && a[i-q]==a[i+q])
        {
            q++;
        }
        pali[i] = q-1;
        center=i;
        bool check=0;
        i++;
        while(i<center+q)
        {
            if(pali[2*center-i]>=q+center-i-1)
            {
                check=1;
                q=center+q-i;
                break;
            }
            pali[i]=pali[2*center-i];
            i++;
        }
        if(!check)q=1;
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)cout<<pali[i]/2<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(i%2==1)cout<<(pali[i]+1)/2<<" ";
    }
    cout<<endl;
}