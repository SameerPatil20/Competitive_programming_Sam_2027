#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define endl '\n'
using namespace std;
int main() {
    ll TestCases;
    cin >> TestCases;
    while (TestCases--)
    {
        ll n;
        cin>>n;
        ll a[3][n];
        ll sum=0;
        rp(3)
        {
            for(ll j=0;j<n;j++)
            {
                cin>>a[i][j];
                sum+=a[i][j];
            }
        }
        sum/=3;
        sum=(sum+2)/3;
        ll check=false;
        ll de[3];
        de[0]=0;
        de[1]=1;
        de[2]=2;
        ll su[3];
        memset(su,0,sizeof(su));
        ll i=0;
        while(i<n && su[de[0]]<sum)
        {
            su[de[0]]+=a[de[0]][i];
            i++;
        }
        ll t1=i;
        while(i<n && su[de[1]]<sum)
        {
            su[de[1]]+=a[de[1]][i];
            i++;
        }
        ll t2=i;
        while(i<n && su[de[2]]<sum)
        {
            su[de[2]]+=a[de[2]][i];
            i++;
        }
        if(su[de[0]]>=sum && su[de[1]]>=sum && su[de[2]]>=sum)
        {
            cout<<1<<" "<<t1<<" "<<t1+1<<" "<<t2<<" "<<t2+1<<" "<<n<<endl;
            continue;
        }
        de[0]=0;
        de[1]=2;
        de[2]=1;
        memset(su,0,sizeof(su));
        i=0;
        while(i<n && su[de[0]]<sum)
        {
            su[de[0]]+=a[de[0]][i];
            i++;
        }
        t1=i;
        while(i<n && su[de[1]]<sum)
        {
            su[de[1]]+=a[de[1]][i];
            i++;
        }
        t2=i;
        while(i<n && su[de[2]]<sum)
        {
            su[de[2]]+=a[de[2]][i];
            i++;
        }
        if(su[de[0]]>=sum && su[de[1]]>=sum && su[de[2]]>=sum)
        {
            cout<<1<<" "<<t1<<" "<<t2+1<<" "<<n<<" "<<t1+1<<" "<<t2<<endl;
            continue;
        }
        de[0]=1;
        de[1]=0;
        de[2]=2;
        memset(su,0,sizeof(su));
        i=0;
        while(i<n && su[de[0]]<sum)
        {
            su[de[0]]+=a[de[0]][i];
            i++;
        }
        t1=i;
        while(i<n && su[de[1]]<sum)
        {
            su[de[1]]+=a[de[1]][i];
            i++;
        }
        t2=i;
        while(i<n && su[de[2]]<sum)
        {
            su[de[2]]+=a[de[2]][i];
            i++;
        }
        if(su[de[0]]>=sum && su[de[1]]>=sum && su[de[2]]>=sum)
        {
            cout<<t1+1<<" "<<t2<<" "<<1<<" "<<t1<<" "<<t2+1<<" "<<n<<endl;
            continue;
        }
        de[0]=1;
        de[1]=2;
        de[2]=0;
        memset(su,0,sizeof(su));
        i=0;
        while(i<n && su[de[0]]<sum)
        {
            su[de[0]]+=a[de[0]][i];
            i++;
        }
        t1=i;
        while(i<n && su[de[1]]<sum)
        {
            su[de[1]]+=a[de[1]][i];
            i++;
        }
        t2=i;
        while(i<n && su[de[2]]<sum)
        {
            su[de[2]]+=a[de[2]][i];
            i++;
        }
        if(su[de[0]]>=sum && su[de[1]]>=sum && su[de[2]]>=sum)
        {
            cout<<t2+1<<" "<<n<<" "<<1<<" "<<t1<<" "<<t1+1<<" "<<t2<<endl;
            continue;
        }
        de[0]=2;
        de[1]=0;
        de[2]=1;
        memset(su,0,sizeof(su));
        i=0;
        while(i<n && su[de[0]]<sum)
        {
            su[de[0]]+=a[de[0]][i];
            i++;
        }
        t1=i;
        while(i<n && su[de[1]]<sum)
        {
            su[de[1]]+=a[de[1]][i];
            i++;
        }
        t2=i;
        while(i<n && su[de[2]]<sum)
        {
            su[de[2]]+=a[de[2]][i];
            i++;
        }
        if(su[de[0]]>=sum && su[de[1]]>=sum && su[de[2]]>=sum)
        {
            cout<<t1+1<<" "<<t2<<" "<<t2+1<<" "<<n<<" "<<1<<" "<<t1<<endl;
            continue;
        }
        de[0]=2;
        de[1]=1;
        de[2]=0;
        memset(su,0,sizeof(su));
        i=0;
        while(i<n && su[de[0]]<sum)
        {
            su[de[0]]+=a[de[0]][i];
            i++;
        }
        t1=i;
        while(i<n && su[de[1]]<sum)
        {
            su[de[1]]+=a[de[1]][i];
            i++;
        }
        t2=i;
        while(i<n && su[de[2]]<sum)
        {
            su[de[2]]+=a[de[2]][i];
            i++;
        }
        if(su[de[0]]>=sum && su[de[1]]>=sum && su[de[2]]>=sum)
        {
            cout<<t2+1<<" "<<n<<" "<<t1+1<<" "<<t2<<" "<<1<<" "<<t1<<endl;
            continue;
        }
        cout<<-1<<endl;
    }
    return 0;
}