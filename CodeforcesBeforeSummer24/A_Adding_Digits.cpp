#include<iostream>
#include<vector>
using namespace std;
int main() {
  int a,b,n;
  cin>>a>>b>>n;
    int d=a;
  bool x=1;
  vector<int> z;
  for(int i=0;i<n;i++)
  {
    int c=1;
    for(int j=0;j<=9;j++)
    {
        if((a*10+j)%b==0)
        {
            a=(a*10+j)%b;
            c=0;
            z.push_back(j);
            break;
        }
    }
    if(c==1)
    {
        x=0;
        break;
    }
  }
  
  if(x)
  {
    cout<<d;
    for(int i=0;i<n;i++)
    {
        cout<<z[i];
    }
  }
  else cout<<"-1";
  return 0;
}