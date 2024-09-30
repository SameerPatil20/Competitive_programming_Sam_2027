#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    rp(n)
    {
        for(int k=0;k<2;k++)
        {
        if(i%2==0)
        {
            rp2(n,j)
            {
                if(j%2==0)
                cout<<"##";
                else 
                cout<<"..";
            }
        }
        else
        {
            rp2(n,j)
            {
                if(j%2==0)
                cout<<"..";
                else 
                cout<<"##";
            }
        }
        cout<<endl;
        }
    }
  }
  return 0;
}