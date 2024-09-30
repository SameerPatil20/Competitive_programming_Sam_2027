#include<bits/stdc++.h>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    s+=s;
    int j=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=c)continue;
        while(j<i || s[j]!='g')
        {
            j++;
        }
        ans=max(ans,j-i);
    }
    cout<<ans<<endl;
  }
  return 0;
}