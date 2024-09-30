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
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int nums[26];
        memset(nums,0,sizeof(nums));
        for(int j=0;j<26;j++)
        {
            map<char,int> mp;
            int left=0;
            for(int i=0;i<n;i++)
            {
                mp[s[i]]++;
                while(mp.size()>j+1)
                {
                    mp[s[left]]--;
                    if(mp[s[left]]==0)mp.erase(s[left]);
                    left++;
                }
                nums[j]+=i-left+1;
            }
        }
        for(int i=25;i>0;i--)
        {
            nums[i]-=nums[i-1];
        }
        for(int i=24;i>=0;i--)
        {
            nums[i]+=nums[i+1];
        }
        out(nums,26," ")
        cout<<endl;
    }
}