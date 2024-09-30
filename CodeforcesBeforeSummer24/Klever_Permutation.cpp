#include<iostream>
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
    int k;
    cin>>n;
    cin>>k;
    int a[n];
    int s;
    int p=n%k;

    s=(n/k)+1;

    for(int i=0;i<p;i++)
    {
        a[i]=1+s*(i/2);
        i++;
    }
    for(int i=1;i<p;i++)
    {
        a[i]=n-((i-1)*s)/2;
        i++;
    }
    for(int i=1;i<s;i++)
    {
        for(int j=i*k;j<i*k+p;j++)
        {
            if(j%2==0)a[j]=a[j-k]+1;
            else a[j]=a[j-k]-1;
        }
    }
    int y=p/2,z=p/2;
    if(p%2!=0)y++;
    s--;
    if(p%2==0)
    {
        for(int i=p;i<k;i++)
        {
            a[i]=y*(s+1)+1+((i-p)*s)/2;
            i++;
        }
        for(int i=p+1;i<k;i++)
        {
            a[i]=n-(s+1)*z-((i-1-p)*s)/2;
            i++;
        }
        for(int i=1;i<s;i++)
        {
            for(int j=i*k+p;j<(i+1)*k;j++)
            {
                if((j%k-p)%2==0)a[j]=a[j-k]+1;
                else a[j]=a[j-k]-1;
            }
        }
    }
    else
    {
        for(int i=p+1;i<k;i++)
        {
            a[i]=y*(s+1)+1+((i-p-1)*s)/2;
            i++;
        }
        for(int i=p;i<k;i++)
        {
            a[i]=n-(s+1)*z-((i-p)*s)/2;
            i++;
        }
        for(int i=1;i<s;i++)
        {
            for(int j=i*k+p;j<(i+1)*k;j++)
            {
                if((j%k-p)%2==0)a[j]=a[j-k]-1;
                else a[j]=a[j-k]+1;
            }
        }
    }

    rp(n)
    cout<<a[i]<<" ";
    cout<<endl;
  }
  return 0;
}