#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {string s;
    cin>>s;
    int n=s.length();
    int lps[n+1];
    int i=0;
    int j=-1;
    lps[0]=-1;
    while(i<n)
    {
        while(j!=-1 && s[i]!=s[j])
        {
            j=lps[j];
        }
        i++;
        j++;
        lps[i]=j;
    }
    // out(lps,n+1," ")
    // cout<<endl;
    for(int i=1;i<n;i++)
    {
        // cout<<(i+1)%(i+1-lps[i])<<endl;
        if(lps[i+1]!=0 && (i+1)%(i+1-lps[i+1])==0)cout<<i+1<<" "<<(i+1)/(i+1-lps[i+1])<<endl;
    }
    cout<<endl;}
}