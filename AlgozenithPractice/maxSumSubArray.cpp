#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    ain(a,n)
    int maxSum=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        maxSum=max(maxSum,sum);
        if(sum<0)
        {
            sum=0;
        }
        cout<<maxSum<<endl;
    }
    maxSum=max(maxSum,sum);
    cout<<maxSum<<endl;

}