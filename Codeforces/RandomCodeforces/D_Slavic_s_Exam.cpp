#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define v1(type,x) type x;cin>>x;
#define v2(type,x,y) type x,y;cin>>x>>y;
#define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
#define remax(maxo,new) maxo=max(maxo,new);
#define endl '\n'
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    string s,t;
    int i=0;int j=0;
    cin>>s>>t;
    while(true)
    {
        if(i==s.size())
        {
            cout<<"NO"<<endl;
            break;
        }
        if(s[i]==t[j] || s[i]=='?')
        {
            s[i]=t[j];
            i++;
            j++;
        }
        else
        {
            i++;
        }
        if(j==t.size())
        {
            cout<<"YES"<<endl;
            while(i!=s.size())
            {
                if(s[i]=='?')
                {
                    s[i]='a';
                }
                i++;
            }
            cout<<s<<endl;
            break;
        }
    }

  }
  return 0;
}