#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        char op1,op2;
        string mod;
        int d;
        cin>>op1>>a>>op1>>b>>op2>>c>>mod>>mod>>d;
        if(op1=='/')
        {
            b=a/b;
            switch(op2)
            {
                case '/':
                b/=c;
                break;
                case '*':
                b=(1ll*(b%d)*(c%d))%d;
                break;
                case '+':
                b=(0ll+(b%d)+(c%d))%d;
                break;
                case '-':
                b=(0ll+(b%d)-(c%d))%d;
                break;
            }
        }
        else if(op2=='/')
        {
            c=b/c;
            b=a;
            switch(op1)
                {
                    case '*':
                    b=(1ll*(b%d)*(c%d))%d;
                    break;
                    case '+':
                    b=(0ll+(b%d)+(c%d))%d;
                    break;
                    case '-':
                    b=(0ll+(b%d)-(c%d))%d;
                    break;
                }
        }
        else if(op1=='*')
        {
            a%=d;
            b%=d;
            c%=d;
            b=(1ll*b*a)%d;
            switch(op2)
                {
                    case '*':
                    b=(1ll*b*c)%d;
                    break;
                    case '+':
                    b=(0ll+b+c)%d;
                    break;
                    case '-':
                    b=(0ll+b-c)%d;
                    break;
                }
        }
        else if(op2=='*')
        {
            a%=d;
            b%=d;
            c%=d;
            c=(1ll*b*c)%d;
            b=a;
            switch(op1)
                {
                    case '+':
                    b=(0ll+b+c)%d;
                    break;
                    case '-':
                    b=(0ll+b-c)%d;
                    break;
                }
        }
        else if(op1=='+')
        {
            a%=d;
            b%=d;
            c%=d;
            b=(0ll+b+a)%d;
            switch(op2)
                {
                    case '+':
                    b=(0ll+b+c)%d;
                    break;
                    case '-':
                    b=(0ll+b-c)%d;
                    break;
                }
        }
        else if(op2=='+')
        {
            a%=d;
            b%=d;
            c%=d;
            c=(0ll+b+c)%d;
            b=a;
            b=(0ll+b-c)%d;
        }
        else
        {
            a%=d;
            b%=d;
            c%=d;
            b=(0ll+a-b)%d;
            b=(0ll+b-c)%d;
        }
        cout<<b<<endl;
    }
    return 0;
}