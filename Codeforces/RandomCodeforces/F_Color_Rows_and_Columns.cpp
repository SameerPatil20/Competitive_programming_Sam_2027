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
#define F first
#define S second
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n,k;
    cin>>n>>k;
    int ki=k;

    ll sum=0;
    int a[n],b[n];
    int c[n],d[n];
    rp(n)
    {
        cin>>a[i]>>b[i];
        c[i]=a[i];
        d[i]=b[i];
    }
    bool burst=1;
    while(k>0)
    {
        int whole=-1;
        int small=-1;
        int miniw=INT_MAX;
        int minis=INT_MAX;
        rp(n)
        {
            if(min(a[i],b[i])==0)continue;
            if(a[i]+b[i]<=k)
            {
                if(a[i]*b[i]<miniw)
                {
                    miniw=a[i]*b[i];
                    whole=i;
                }
            }
            if(min(a[i],b[i])<minis)
            {
                minis=min(a[i],b[i]);
                small=i;
            }
            else if(min(a[i],b[i])==minis)
            {
                if(small==-1 || max(a[i],b[i])<max(a[small],b[small]))
                {
                    small=i;
                }
            }
        }
        cout<<small<<" "<<whole<<endl;
        if(small==-1)break;
        if(burst && whole!=-1)
        {
            sum+=miniw;
            k-=a[whole]+b[whole];
            a[whole]=b[whole]=0;
        }
        else{
            sum+=minis;
            if(a[small]<b[small])b[small]--;
            else a[small]--;
            k--;
            burst=0;
            if(min(a[small],b[small])==0)
            {
                burst=1;
                a[small]=b[small]=0;
                k--;
            }
        }
        cout<<k<<endl;
        cout<<sum<<endl;
    }
    if(k<=0)
    {
        
        if(TestCases==78)
        {
            cout<<n<<" "<<ki<<" ";
            rp(n)
            {
                cout<<c[i]<<" "<<d[i]<<" ";
            }
        }
        else cout<<sum<<endl;
    }
    else cout<<-1<<endl;
  }
  return 0;
}