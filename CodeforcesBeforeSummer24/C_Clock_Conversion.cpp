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
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(a==0)
    {
        if(b<=9)
        {
            cout<<"12:0"<<b<<" AM"<<endl;
            continue;
        }
        else 
        {
            cout<<"12:"<<b<<" AM"<<endl;
            continue;
        }
    }
    else if(a<12)
    {
        if(a<=9)
        cout<<"0"<<a;
        else cout<<a;
        cout<<":";
        if(b<=9)
        {
            cout<<"0"<<b<<" AM"<<endl;
            continue;
        }
        else 
        {
            cout<<b<<" AM"<<endl;
            continue;
        }
    }
    else if(a==12)
    {
        cout<<a<<":";
        if(b<=9)
        {
            cout<<"0"<<b<<" PM"<<endl;
            continue;
        }
        else 
        {
            cout<<b<<" PM"<<endl;
            continue;
        }
    }
    else
    {
        a=a-12;
        if(a<=9)
        cout<<"0"<<a;
        else cout<<a;
        cout<<":";
        if(b<=9)
        {
            cout<<"0"<<b<<" PM"<<endl;
            continue;
        }
        else 
        {
            cout<<b<<" PM"<<endl;
            continue;
        }
    }

  }
  return 0;
}