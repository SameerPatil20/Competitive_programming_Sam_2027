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
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        if(c=='>')a[i][0]=1;
        else a[i][0]=0;
    }
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        if(c=='>')a[i][1]=1;
        else a[i][1]=0;
    }
    if(n==2)cout<<"YES"<<endl;
    else
    {
        if(a[n-2][1]==0)cout<<"NO"<<endl;
        else
        {
            bool check=true;
            int i=0;
            int j=0;
            while((i!=n-2 || j!=0) && (i!=n-3 || j!=1))
            {
                if(a[i+1][j]==1)i=i+2;
                else if(j==0 && a[i][1]==1)
                {
                    i=i+1;
                    j=1;
                }
                else if(j==1 && a[i][0]==1)
                {
                    i++;
                    j=0;
                }
                else
                {
                    check=false;
                    break;
                }
            }
            if(check==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }
    }
  return 0;
}