#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int subSetSum(int a[],int n,int x)
{
    if(x<0)return 0;
    else if(n==1)
    {
        if(a[0]<=x)
        {
            return 2;
        }
        else return 1;
    }
    else
    {
        return subSetSum(a+1,n-1,x-a[0])+subSetSum(a+1,n-1,x);
    }
}
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n];
    ain(a,n)
    cout<<subSetSum(a,n,x)<<endl;
}