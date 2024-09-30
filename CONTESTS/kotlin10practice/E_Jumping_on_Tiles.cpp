#include<bits/stdc++.h>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    string s;
    cin >> s;
    int answer=abs(s[s.size()-1]-s[0]);
    vector<pair<char,int>> v;
    for(int i=1;i<s.size()-1;i++)
    {
        if(s[i]>=min(s[0],s[s.size()-1]) && s[i]<=max(s[0],s[s.size()-1]))
        {
            v.push_back({s[i],i+1});
        }
    }
    sort(v.begin(),v.end());
    if(s[0]>s[s.size()-1])
    {
        reverse(v.begin(), v.end());
    }
    cout<<answer<<" "<<v.size()+2<<endl;
    cout<<1;
    for(int i=0;i<v.size();i++)
    {
        cout<<" "<<v[i].second;
    }
    cout<<" "<<s.size()<<endl;
  }
  return 0;
}