#include<iostream>
#include<vector>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n;
    cin>>n;
    int y=0,z=__INT_MAX__;
    vector<int> q;
    for(int i=0;i<n;i++)
    {
        int a,x;
        cin>>a>>x;
        if(a==3) q.push_back(x);
        else if(a==1)
        {
            if(x>y)y=x;
        }
        else
        {
            if(x<z)z=x;
        }
    }
    int count=0;
    for(int j=0;j<q.size();j++)
    {
        if(q[j]>=y && q[j]<=z) count++;
    }
    int r=z-y+1-count;
    if(r<0)r=0;
    cout<<r<<endl;
  }
  return 0;
}