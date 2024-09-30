#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n,k,m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    int i=0,count=0;
    char p='a';
    string ans;
    while(i<m)
    {
        map<char, int> a;
        int sum=(k*(k+1))/2;
        bool x=false;
        while(sum!=0 && i<m)
        {
            if(a[s[i]]==0)
            {
                 sum-=(s[i]-96);
                a[s[i]]++;
            }
            if(sum==0)
            {
                count++;
                ans+=s[i];
                x=true;
            }
            i++;
        }
        if(count==n)break;
        if(x==0)
        {
            while(a[p]!=0)
            {
                p++;
            }
            for(int h=0;h<n-count;h++)
            {
                ans+=p;
            }
        }
        else if(x==1 && i==m)
        {
            for(int h=0;h<n-count;h++)
            {
                ans+=p;
            }
        }
    }
    if(count==n)cout<<"YES"<<endl;
    else 
    {
        cout<<"NO"<<endl;
        cout<<ans<<endl;
    }

  }
  return 0;
}