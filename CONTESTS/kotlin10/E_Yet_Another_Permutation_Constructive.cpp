#include<bits/stdc++.h>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n,k;
    cin>>n>>k;
    int y=n-1;
    int posi=0;
    while(y!=0)
    {
        y>>=1;
        posi++;
    }
    if(k>posi)
    {
        cout<<-1<<endl;
        continue;
    }
    int ans[n];
    for(int i=0; i<n; i++)
    {
        ans[i]=0;
    }
    ans[0]=n;
    int q=1;
    for(int j=0;j<k-1;j++)
    {
        for(int i=1<<j;i<n;i+=2<<j)
        {
            ans[i]=q;
            q++;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(ans[i]==0)
        {
            ans[i]=q;
            q++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}