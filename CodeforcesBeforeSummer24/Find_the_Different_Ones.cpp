#include<iostream>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    // Your code here
    int n;
    cin>>n;
    int a[n];
    rp(n)
    {
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        //cout<<i<<" ndskn"<<endl;
        int j=i;
        while(a[j]==a[i] && j<n)j++;
        while(i!=j)
        {
            b[i]=j;
            i++;
        }
        i--;
    }
    int q;
    cin>>q;
    rp(q)
    {
        int l,r;
        cin>>l>>r;
        if(b[l-1]>r-1)cout<<-1<<" "<<-1<<endl;
        else cout<<l<<" "<<b[l-1]+1<<endl;
    }
    cout<<endl;
  }
  return 0;
}