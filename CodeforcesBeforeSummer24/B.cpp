#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort[a,a+n];
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            count+=i;
            int x=i;
            while(a[i+3]==a[i] && i+3<n)
            {
                count++;
                i++;
            }
            i=x;
        }
    }
    cout<<count<<endl;
  }
  return 0;
}