#include<iostream>
#include<algorithm>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    // Your code here
    ll int n;
    cin>>n;
    int a[n];
    int b[n];
    rp(n)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    ll int mex=a[n-1]+1;
    
    // rp(n)
    // {
    //     cout<<a[i]<<endl;
    // }

    if(a[0]!=0)
    {
        mex=0;
        cout<<2<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<2<<" "<<n<<endl;
    }

    else{
        
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i]+1)
        {
            mex=a[i]+1;
            break;
        }
    }
    int count[mex];
    rp(mex)
    {
        count[i]=0;
    }
    int z=0;
    //rp(n)cout<<a[i]<<endl;
    while(z<n && a[z]<mex)
    {
        count[a[z]]++;
        z++;
    }
    //cout<<count[0]<<endl;
    //for(int i=0;i<n;i++)
    // {
    //     count[a[i]]++;
    // }
    //cout<<count[0]<<endl;
    bool ans =true;
    for(int i=0;i<mex;i++)
    {
        if(count[i]<2)
        {
            ans=false;
            break;
        }
        count[i]=1;
    }
    if(ans==0)cout<<-1<<endl;
    else{
        // rp(mex)
        // {
        //     count[i]=1;
        // }
        ll int sum=(mex*(mex+1))/2;
        int f=0;
        while(sum!=0)
        {
            if(count[b[f]])
            {
                count[b[f]]--;
                sum-=b[f]+1;
            }
            f++;
        }
        cout<<2<<endl;
        cout<<1<<" "<<f<<endl;
        cout<<f+1<<" "<<n<<endl;
    }
    }

  }
  return 0;
}