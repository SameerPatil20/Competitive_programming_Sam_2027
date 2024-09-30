#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int> a,b;
        int A=0,B=0;                  
        int z;
        cin>>z;                       
        a.push_back(z);
        A++;
        int penalty=0;
        for(int j=1;j<n;j++)
        {
            cin>>z;
            if(B==0)
            {
                if(z>a[A-1])
                {
                    b.push_back(z);
                    B++;
                }
                else
                {
                    a.push_back(z);
                    A++;
                }
            }
            else
            {
                int m=0;
                if(a[A-1]<b[B-1]) m=1;
                if(a[A-1]>b[B-1]) m=2;
                if(m==0)
                {
                    a.push_back(z);
                    A++;
                    if(z>b[B-1])penalty++;
                }
                else if(m==1)
                {
                    if(a[A-1]>=z)
                    {
                        a.push_back(z);
                        A++;
                    }
                    else if(b[B-1]<z)
                    {
                        a.push_back(z);
                        A++;
                        penalty++;
                    }
                    else
                    {
                        b.push_back(z);
                        B++;
                    }
                }
                else
                {
                    if(b[B-1]>=z)
                    {
                        b.push_back(z);
                        B++;
                    }
                    else if(a[A-1]<z)
                    {
                        b.push_back(z);
                        B++;
                        penalty++;
                    }
                    else
                    {
                        a.push_back(z);
                        A++;
                    }
                }
            }
        }
        cout<<penalty<<endl;
    }
}