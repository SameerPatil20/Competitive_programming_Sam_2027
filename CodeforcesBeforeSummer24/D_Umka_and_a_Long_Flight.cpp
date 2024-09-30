#include<iostream>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int fibonacci[45];
bool solve(int n, int x, int y)
{
    if (n==1)return 1;
    else 
    {
        if(y>fibonacci[n])
        return solve(n-1,y-fibonacci[n],x);
        else if(y<=fibonacci[n-1])
        return solve(n-1,y,x);
        else return 0;
    }
    return 0;
}
int main() {
    fibonacci[0]=1;
    fibonacci[1]=1;
    rp(43)
    {
        fibonacci[i+2]=fibonacci[i+1]+fibonacci[i];
    }
    int TestCases;
    cin >> TestCases;
    while (TestCases--) {
    int n,x,y;
    cin>>n>>x>>y;
    if(solve(n,x,y)==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}