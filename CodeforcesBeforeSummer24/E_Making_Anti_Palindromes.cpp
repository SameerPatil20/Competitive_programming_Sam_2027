#include<iostream>
#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char , int> d;
    for(char x='a';x<='z';x++)
    d[x]=0;
    int countf=0;
    if(n%2==1)
    {
        cout<<-1<<endl;
        continue;
    }
    else
    {
        rp(n/2)
        {
            if(s[i]==s[n-1-i])
            {
                d[s[i]]++;
            }
        }
        int maxd=0;
        int count=0;
        for(char x='a';x<='z';x++)
        {
            if(d[x]>0) count++;
            maxd=max(maxd,d[x]);
        }
        if(maxd>n/2)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(count%2==0)
        cout<<count/2<<endl;
        else cout<<count/2+1<<endl;
    }
  }
  return 0;
}