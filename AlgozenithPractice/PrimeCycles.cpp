#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;

const int N = 100;

ll ans = 0;
bool isPrime[N];
bool marked[N];
vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

void solve(int m, int n, int prev, int par) {
    if(!m) {
        if(isPrime[prev + 1]) {
            ans++;
        }
        return;
    }
    for(int i = 1 + par; i <= n; i++) {
        if(!marked[i] && isPrime[i + prev]) {
            marked[i] = true;
            solve(m - 1, n, i, 1 - par);
            marked[i] = false;
        }
    }
    return;
}


int main()
{
    int n=100;
    int a[2*n];
    for(int i=3;i<2*n;i++)
    {
        a[i]=1;
    }
    for(int i=2;i<2*n;i++)
    {
        if(a[i])
        {
            for(int j=i*i;j<2*n;j+=i)
            {
                a[j]=0;
            }
        }
    }
    memset(isPrime, false, sizeof(isPrime));
    memset(marked, false, sizeof(marked));

    for(int u : prime) {
        isPrime[u] = true;
    }
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        n=8;
        cout<<n<<endl;
        vector<int> v;
        for(int i=1;i<n;i++)
        {
            v.push_back(i+1);
        }
        int count=0;
        do
        {
            bool check=1;
            if(a[v[0]+1]==0 || a[v[n-2]+1]==0)
            {
                check=0;
            }
            for(int i=0;i<n-2;i++)
            {
                if(a[v[i]+v[i+1]]==0)
                {
                    check=0;
                    break;
                }
            }
            if(check)
            {
                count++;
            }
        }while(next_permutation(v.begin(),v.end()));
        int answer;
        if(n % 2 == 1) {ans=0;}
        else{
            marked[1] = true;
            solve(n - 1, n, 1, 1);
        }
        if(count!=ans)
        {
            cout<<n<<" "<<count<<" "<<ans<<endl;
        }
    }
    
}