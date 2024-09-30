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
    string s;
    vector<string> str;
    int ans=0;
    while (getline(cin,s))
	{
        str.push_back(s);
        int u=s.length();
        ans=max(ans,u);
	}
    rp(ans+2)cout<<'*';
    cout<<endl;
    int flag = 0;
    rp(str.size())
    {
        // cout<<(ans-str[i].size())/2+((ans-str[i].size())%2)*flag<<" "<<str[i].size()<<endl;
        cout<<'*';
        rp2((ans-str[i].size())/2+((ans-str[i].size())%2)*flag,j)cout<<" ";
        cout<<str[i];
        rp2((ans-str[i].size())/2+((ans-str[i].size())%2)*(1-flag),j)cout<<" ";
        cout<<'*';
        if((str[i].size()+ans)%2==1)flag=1-flag;
        cout<<endl;
    }
    rp(ans+2)cout<<'*';
    cout<<endl;
  return 0;
}