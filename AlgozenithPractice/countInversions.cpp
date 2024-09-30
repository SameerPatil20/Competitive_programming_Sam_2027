#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int countInv(ll a[],int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        if(a[1]<a[0])
        {
            swap(a[1],a[0]);
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    int first=countInv(a,n/2);
    int second=countInv(a+n/2,n-n/2);
    int mix=0;
    ll c[n];
    int i=0,j=0,k=0;
    while(i<n/2 && j<n-n/2)
    {
        if(a[i]<=a[n/2+j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=a[n/2+j];
            j++;
            mix+=n/2-i;
        }
    }
    while(i<n/2)
    {
        c[k++]=a[i++];
    }
    while(j<n-n/2)
    {
        c[k++]=a[n/2+j++];
    }
    for(int m=0; m<n; m++)
    {
        a[m]=c[m];
    }
    return first+second+mix;

}
int hardCodecountingofinversions(ll a[],int n)
{
    int inv=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                inv++;
            }
        }
    }
    return inv;
}
int main()
{
    srand(time(0));
    int testcases;
    cin>>testcases;
    int n;
    while(testcases--)
    {
        cout<<testcases<<endl;
        n=10+((rand())%90);
        ll a[n];
        ll b[n];
        for(int i=0; i<n; i++)
        {
            a[i]=rand();
            b[i]=a[i];
        }
        if(hardCodecountingofinversions(b,n)!=countInv(a,n))
        {
            cout<<"Wrong Answer"<<endl;
            cout<<n<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            cout<<hardCodecountingofinversions(b,n)<<" "<<countInv(b,n);
            return 0;
        }
    }
    cout<<"Success"<<endl;
}