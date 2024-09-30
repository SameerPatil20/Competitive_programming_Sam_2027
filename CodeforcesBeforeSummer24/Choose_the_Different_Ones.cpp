#include<iostream>
#include<algorithm>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    // Your code here
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    int b[m];
    rp(n)
    {
        cin>>a[i];
    }
    rp(m)
    {
        cin>>b[i];
    }
    int an=0,bn=0,s=0,p=0;
    sort(a,a+n);
    sort(b,b+m);
    bool ans=true;
    for(int i=1;i<=k;i++)
    {
        //int sd=s,pd=p;
        while(a[s]<i && s<n)s++;
        while(b[p]<i && p<m)p++;
        int x=0;
        if(a[s]==i && s<n)
        {
            an++;
            x++;
        }
        if(b[p]==i && p<m)
        {
            bn++;
            x++;
        }
        if(x==0)
        {
            ans=false;
            break;
        }
        // if(s==n && p==m)
        // {
        //     ans=false;
        //     break;
        // }
        // else if(s==n && p<m)
        // {
        //     bn++;
        //     //s=sd;
        // }
        // else if(s<n && p==m)
        // {
        //     an++;
        //     //p=pd;
        // }
        // else
        // {
        //     bn++;
        //     an++;
        // }
    }
    //cout<<an<<" "<<bn<<" "<<k<<endl;
    if(an<k/2 || bn<k/2)ans=false;
    if(ans==false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;



  }
  return 0;
}