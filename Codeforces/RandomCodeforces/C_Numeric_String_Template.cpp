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
    int n;
    cin>>n;
    ll a[n];
    ain(a,n);
    int m;
    cin>>m;
    while(m--)
    {
        string s;
        cin>>s;
        if(s.size()!=n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll y[26];
        set(y,26,10e15)
        bool check=1;
        rp(n)
        {
            int ans=-1;
            for(int j=0;j<26;j++)
            {
                if(y[j]==a[i])
                {
                    ans=j;
                    break;
                }
            }
            // cout<<ans<<endl;
            if(ans==-1)
            {
                if(y[s[i]-'a']==10e15)
                {
                    y[s[i]-'a']=a[i];
                    continue;
                }
                else
                {
                    cout<<"NO"<<endl;
                    check=0;
                    break;
                }
            }
            else if(long(s[i]-'a')!=ans)
            {
                cout<<"NO"<<endl;
                check=0;
                break;
            }
        }
        if(check)cout<<"YES"<<endl;

    }
  }
  return 0;
}