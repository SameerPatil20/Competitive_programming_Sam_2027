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
    string s;
    cin>>s;
    map<char,int> mp;
    rp(n) mp[s[i]]++;
    int odd=1;
    int even=0;
    rp(26)
    {
        int start=even;
        bool k=0;
        bool switc=0;
        while(even<n && mp['a'+i]>0)
        {
            s[even]='a'+i;
            even+=2;
            mp['a'+i]--;
            if(even>=n)k=1;
        }
        while(odd>=0 && mp['a'+i]>0)
        {
            if(k==1 && start-1==odd)
            {
                switc=1;
                break;
            }
            s[odd]='a'+i;
            odd+=2;
            mp['a'+i]--;
        }
        if(switc==1)
        {int y=n-2+(n-1)%2;
        while(mp['a'+i]>0)
        {
            // cout<<"yo"<<endl;
            s[y]='a'+i;
            y-=2;
            mp['a'+i]--;
        }}

    }
    cout<<s<<endl;
  }
  return 0;
}