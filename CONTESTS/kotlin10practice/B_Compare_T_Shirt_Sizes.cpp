#include<bits/stdc++.h>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    string a,b;
    cin>>a>>b;
    int as=a.size(),bs=b.size();
    if(a[as-1]==b[bs-1])
    {
        if(as==bs)
        {
            cout<<'='<<endl;
            continue;
        }
        else if(a[as-1]=='S')
        {
            if(as<bs)
            {
                cout<<'>'<<endl;
                continue;
            }
            else
            {
                cout<<'<'<<endl;
                continue;
            }
        }
        else
        {
            if(as<bs)
            {
                cout<<'<'<<endl;
                continue;
            }
            else
            {
                cout<<'>'<<endl;
                continue;
            }
        }
    }
    else if(b[bs-1]=='L')
    {
        cout<<'<'<<endl;
        continue;
    }
    else if(a[as-1]=='L')
    {
        cout<<'>'<<endl;
        continue;
    }
    else if(a[as-1]=='S')
    {
        cout<<'<'<<endl;
        continue;
    }
    else cout<<'>'<<endl;

  }
  return 0;
}