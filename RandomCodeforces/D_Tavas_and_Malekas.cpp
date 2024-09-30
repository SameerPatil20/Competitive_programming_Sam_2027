#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define MOD 1000000007
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    string s;
    cin>>s;
    ll q[m];
    for(ll i=0;i<m;i++)
    {
        cin>>q[i];
    }
    ll k=s.size();
    ll z[k];
    z[0]=0;
    ll l=0;
    ll r=0;
    ll i=1;
    while(i<k)
    {
        z[i]=0;
        if(i<r)
        {
            z[i]=min(r-i,z[i-l]);
        }
        while(i+z[i]<k && s[i+z[i]]==s[z[i]])
        {
            z[i]++;
        }
        if(i+z[i]>r)
        {
            l=i;
            r=i+z[i];
        }
        i++;
    }
    ll ans=1;
    i=1;
    ll j=0;
    while(i<=n)
    {
        if(j==m)
        {
            while(i<=n)
            {
                ans*=26;
                ans%=MOD;
                i++;
            }
            break;
        }
        while(i<q[j])
        {
            ans*=26;
            ans%=MOD;
            i++;
        }
        if(i>q[j])
        {
            ll x=i-q[j];
            if(z[k-x]!=x)
            {
                ans=0;
                break;
            }
        }
        i=q[j]+k;
        j++;
    }
    cout<<ans<<endl;
}