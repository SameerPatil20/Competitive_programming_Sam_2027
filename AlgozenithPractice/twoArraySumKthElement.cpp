#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool check(int n,int m,int a[],int b[],int k,int mid)
{
    int i=0,j=0;
    int count=0;
    while(a[i]+b[j]<=mid )
    {
        j++;
        if(j==m)break;
    }
    count+=j;
    j--;
    while(j>-1)
    {
       i++;
       if(i==n)break;
       while(a[i]+b[j]>mid )
        {
            j--;
            if(j==-1)break;
        }
        count+=j+1;
    }
    return count<k;
}
int binarySearch(int n,int m,int a[],int b[],int k)
{
    int low=a[0]+b[0];
    int high=a[n-1]+b[m-1];
    int answer=low-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        // cout<<"mid: "<<mid<<endl;
        if(check(n,m,a,b,k,mid))
        {
            answer=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return answer+1;
}
int hardcode(int n,int m,int a[],int b[],int k)
{
    vector<int> c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c.push_back(a[i]+b[j]);
        }
    }
    sort(c.begin(), c.end());
    // for(int i=0;i<c.size();i++)
    // {
    //     cout<<c[i]<<" ";
    // }
    // cout<<endl;
    return c[k-1];
}
int main()
{
    // int n,m;
    // cin>>n>>m;
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // sort(a,a+n);
    // int b[m];
    // for(int i=0;i<m;i++)
    // {
    //     cin>>b[i];
    // }
    // sort(b,b+m);
    // int k;
    // cin>>k;
    // int Answer=hardcode(n,m,a,b,k);
    // cout<<Answer<<endl;
    // return 0;
    
    srand(time(0));
    int testcases;
    cin>>testcases;
    int n,m;
    while(testcases--)
    {
        cout<<testcases<<endl;
        n=1+((rand())%999);
        m=1+((rand())%999);
        int a[n];
        int b[m];
        for(int i=0; i<n; i++)
        {
            a[i]=rand()%100000;
        }
        for(int i=0; i<m; i++)
        {
            b[i]=rand()%100000;
        }
        sort(a,a+n);
        sort(b,b+m);
        int k=1+((rand())%(n*m));
        if(hardcode(n,m,a,b,k)!=binarySearch(n,m,a,b,k))
        {
            cout<<"Wrong Answer"<<endl;
            cout<<n<<" "<<m<<" "<<k<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<m; i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            cout<<hardcode(n,m,a,b,k)<<" "<<binarySearch(n,m,a,b,k);
            return 0;
        }
    }
    cout<<"Success"<<endl;
}