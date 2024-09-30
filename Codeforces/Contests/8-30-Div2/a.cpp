#include<iostream>
using namespace std;
int mod=1000000007;
int main()
{
    long long int a=2;
    for(int i=0;i<2e9;i++)
    {
        a*=a;
        a%=mod;
    } 
    cout<<a;
}