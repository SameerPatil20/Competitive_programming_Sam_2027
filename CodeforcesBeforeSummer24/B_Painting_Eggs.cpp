#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int g,a,G=0,A=0;
    string o;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>g;
        if(i==1)
        {
            if(g<a)
            {
                o='G';
                G+=g;
            }
            else
            {
                o='A';
                A+=a;
            }
        }
        else
        {
            if(abs(G+g-A)<abs(A+a-G))
            {
                o+='G';
                G+=g;
            }
            else
            {
                o+='A';
                A+=a;
            }
        }
    }
    if(abs(G-A)<=500)
    {
        cout<<o;
    }
    else cout<<"-1";
}