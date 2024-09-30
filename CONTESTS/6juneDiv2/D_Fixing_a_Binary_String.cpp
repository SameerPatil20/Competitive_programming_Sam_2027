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
    int n,k;
    cin>>n>>k;
    int a[n];
    rp(n)
    {
        char x;
        cin>>x;
        a[i]=x-'0';
    }
    int flag=0;
    rp(k)
    {
        if(a[n-1-i]==a[n-1])flag++;
        else break;
    }
    // cout<<flag<<endl;
    int ans=0;
    int error=0;
    int i=0;
    bool check=0;
    while(i<n)
    {
        int j=i;
        if(i!=0 && a[i]==a[i-1])
        {
            // cout<<"yo "<<i<<endl;
            
            error++;
            ans=j;
            check=1;
        }
        while(j<i+k && j<n)
        {
            if(a[j]==a[i])
            {
                j++;
            }
            else
            {
                if(j+flag==i+k && a[j-1]==a[n-1])
                {
                    // cout<<"g"<<endl;
                    if(check==1)
                    {
                        ans=j-k;
                        check=0;
                        break;
                    }
                    error++;
                    ans=j;
                    break;
                }
                else 
                {
                    // cout<<"g"<<endl;
                    error=2;
                    break;
                }
            }
        }
        // if(check==1)ans=j
        if(error==2)break;
        if(check==1)
    {
        if(a[i]==a[n-1])
            {
                error=2;
                break;
            }
            else check=0;
    }
            i=j;

    }
    // cout<<error<<" yo"<<endl;
    
    if(error==0)cout<<n<<endl;
    else if(error==1)cout<<ans<<endl;
    else cout<<-1<<endl;
  }
  return 0;
}