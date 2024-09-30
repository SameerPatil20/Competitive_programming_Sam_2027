#include<bits/stdc++.h>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n,k;
    cin>>n>>k;
    int small[26];
    int big[26];
    for(int i=0;i<26;i++)
    {
        small[i]=0;
        big[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        if(x<'a')
        {
            big[x-'A']++;
        }
        else{
            small[x-'a']++;
        }
    }
    int extra=0;
    int burles=0;
    for(int i=0;i<26;i++)
    {
        burles+=min(small[i],big[i]);
        extra+=(max(small[i],big[i])-min(small[i],big[i]))/2;
    }
    cout<<burles+min(k,extra)<<endl;
  }
  return 0;
}