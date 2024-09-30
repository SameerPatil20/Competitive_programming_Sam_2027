#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll mini(vector<pair<ll,ll>> &mp)
{
    ll ansi=0;
    for(int i=1; i<26; i++)
    {
        if(mp[ansi].second>mp[i].second)ansi=i;
    }
    return ansi;
}
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    ll n=s.size();
    ll count=0;
    ll i=0;
    ll j=0;
    ll ans=0;
    vector<pair<ll,ll>> mp(26,{0,INT_MAX});
    while(true)
    {
        if(count<k)
        {
            if(j==n)break;
            if(mp[s[j]-'a'].first==0)
            {
                count++;
            }
            mp[s[j]-'a'].first++;
            mp[s[j]-'a'].second=j;
            j++;
            continue;
        }
        if(count==k)
        {
            ll bre=mp[mini(mp)].second;
            ans+=1+bre-i;
            if(j==n)break;
            if(mp[s[j]-'a'].first==0)
            {
                count++;
            }
            mp[s[j]-'a'].first++;
            mp[s[j]-'a'].second=j;
            j++;
            continue;  
        }
        if(count>k)
        {
            while(count>k)
            {
                if(mp[s[i]-'a'].first==1)
                {
                    count--;
                    mp[s[i]-'a'].second=INT_MAX;
                }
                mp[s[i]-'a'].first--;
                i++;
            }
        }
    }
    cout<<ans<<endl;
}