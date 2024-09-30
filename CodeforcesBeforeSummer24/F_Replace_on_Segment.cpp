#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        long double R,B,M;
        cin>>R>>B>>M;
        int count=0;
        std::cout << std::fixed << std::setprecision(18);
        while (B>0.001 && count<1200)
        {
            double I;
            I=(round((R/100)*B*100))/100.00;
            B=B+I-M;
            B=(round(B*100))/100;
            count++;
            //cout << B<<endl;
        }
        if(count<=1200 && B<0.001)
        cout<<count<<endl;
        else
        cout<<"impossible"<<endl; 
    }
    
}