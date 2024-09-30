#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
const int MOD = 998244353;
const int N = 200010; 
ll two[N], a[N], freq[N], sf[N];
int Mex(int a[],int n)
{
    ll sum=0;
    int mex=1;
    int i=0;
    ll extra=1;
    while(mex<=n+1)
    {
        int count=0;
        while(a[i]==mex)
        {
            i++;
            count++;
        }
        if(count==0)
        {
            sum+=mex*(1<<(n-i))*extra;
            // sum%=MOD;
            break;
        }
        sum+=mex*(1<<(n-i))*extra;
        // sum%=MOD;
        extra*=((1<<count)-1);
        mex++;
        cout<<extra<<" "<<sum<<endl;
    }
    return sum;
}
int sol(int a[],int n) {
  
	for (int i = 0; i < n; ++i) {
	  ++freq[min(a[i], n)];
	}
	sf[n + 69] = 0;
	for (int i = n + 68; i; --i) sf[i] = sf[i + 1] + freq[i];
	ll ans = 0, pf = 1;
	for (ll i = 1; i <= n + 1; ++i) {
	  ans = (ans + i * (pf * two[sf[i + 1]] % MOD)) % MOD;
	  pf = pf * (two[freq[i]] - 1) % MOD;
	}
	ans += MOD, ans %= MOD;
	for (int i = 0; i <= n + 69; ++i) freq[i] = 0;
    return ans;
}
int main()
{
    // srand(time(0));
    // two[0] = 1;
    // for (int i = 1; i < N; ++i) two[i] = 2 * two[i - 1] % MOD;
    // int test;
    // cin>>test;
    // while(test--)
    // {
    //     int n;
    //     n=rand()%10;
    //     int a[n];
    //     for(int i=0;i<n;i++)
    //     {
    //         a[i]=rand()%1000;
    //     }
    //     sort(a,a+n);
    //     if(sol(a,n)!=Mex(a,n))
    //     {
    //         cout<<"Wrong Answer"<<endl;
    //         cout<<n<<endl;
    //         for(int i=0; i<n; i++)
    //         {
    //             cout<<a[i]<<" ";
    //         }
    //         cout<<endl;
    //         cout<<sol(a,n)<<" "<<Mex(a,n);
    //         return 0;
    //     }   
    // }
    // cout<<"Success"<<endl;
    int a[1];
    a[0]=74;
    cout<<sol(a,1);
    return 0;
}