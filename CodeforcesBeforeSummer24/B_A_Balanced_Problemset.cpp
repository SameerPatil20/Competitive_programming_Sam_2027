#include<iostream>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int x,n;
    cin>>x>>n;
    int answer=1;
    int q=x/n;
    while(q!=1)
    {
        if(x%q==0)
        {
            answer=q;
            break;
        }
        else   
        {
            n++;
            q=min(q-1,x/n);
        }

    }
    cout<<answer<<endl;
  }
  return 0;
}