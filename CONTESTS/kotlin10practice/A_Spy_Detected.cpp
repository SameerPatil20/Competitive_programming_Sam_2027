#include<bits/stdc++.h>
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    int a[n];
    ain(a,n);
    int answer=1;
    if(a[0]==a[1])
    for(int i=2;i<n;i++)
    {
        if(a[i]!=a[0])
        {
            answer=i+1;
            break;
        }
    }
    else 
    {
        if(a[0]==a[2])
        {
            answer=2;
        }
    }
    cout<<answer<<endl;
  }
  return 0;
}