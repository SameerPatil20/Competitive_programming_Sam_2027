#include<iostream>
#include<vector>
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
    char r1[n];
    rp(n)
    {
        cin>>r1[i];
    }
    char r2[n];
    rp(n)
    {
        cin>>r2[i];
    }
    int drop=n-1;
    int continu=0;
    vector<int> cont;
    cont.push_back(0);
    int i=0;
    while(i<n-1)
    {
        if(r1[i+1]>r2[i])
        {
            drop=i;
            break;
        }
        else if(r1[i+1]==r2[i])
        {   bool x=0;
            while(r1[i+1]==r2[i] )
            {   
                continu++;
                if(i==n-2)
                {
                    drop=n-1;
                    x=1;
                    break;
                }
                i++;
            }
            if(x==1)
            {
                //cout<<'abc'<<endl;
                cont.push_back(continu);
                break;
            }
            else if(r2[i]=='0')
            {
                drop=i;
                
                cont.push_back(continu);
                break;
            }
        }
        i++;
        continu=0;
    }
    for(int j=0;j<=drop;j++)
    {
        cout<<r1[j];
    }
    for(int j=drop;j<n;j++)
    {
        cout<<r2[j];
    }
    cout<<endl;
    cout<<(cont[cont.size()-1])+1<<endl;
  }
  return 0;
}