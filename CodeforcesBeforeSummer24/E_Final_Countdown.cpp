#include<iostream>
#include<algorithm>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int n;
    cin>>n;
    long long int a[n];

    char t;
    rp(n)
    {
        cin>>t;
        a[i]=t-48;
        // if(t=='0')a[i]=0;
        // if(t=='1')a[i]=1;
        // if(t=='2')a[i]=2;
        // if(t=='3')a[i]=3;
        // if(t=='4')a[i]=4;
        // if(t=='5')a[i]=5;
        // if(t=='6')a[i]=6;
        // if(t=='7')a[i]=7;
        // if(t=='8')a[i]=8;
        // if(t=='9')a[i]=9;
    }

    // int m;
    // cin>>m;
    
    // for(int i=n-1;i>=0;i--)
    // {
    //     a[i]=m%10;
    //     m=m/10;
    // }

    rp(n-1)
    {
        a[i+1]+=a[i];
    }
    for(int i=n-1;i>0;i--)
    {
        a[i-1]+=a[i]/10;
        a[i]=a[i]%10;
    }
    bool check=0;
    rp(n)
    {
        if(check==0 && a[i]==0)continue;
        else check=1;
        cout<<a[i];
    }
    cout<<endl;

  }
  return 0;
}