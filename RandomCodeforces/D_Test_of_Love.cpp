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
    int n,m,k;
    cin>>n>>m>>k;
    string t;
    cin>>t;
    string s="L";
    s+=t;
    s+='L';
    int i=0;
    bool check=1;
    while(i<n+1)
    {
        // cout<<i<<endl;
        if(s[i]=='L')
        {
            i++;
            int jump=1;
            while(i<n+1 && jump<m && s[i]!='L')
            {
                i++;
                jump++;
            }
            continue;
        }
        if(s[i]=='W')
        {
            k--;
            if(k==-1)
            {
                check=0;
                break;
            }
            i++;
        }
        if(s[i]=='C')
        {
            check=0;
            break;
        }
    }
    if(check)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
  }
  return 0;
}