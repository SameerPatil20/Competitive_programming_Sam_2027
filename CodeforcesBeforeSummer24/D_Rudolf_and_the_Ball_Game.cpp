#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n,m,x;
    cin>>n>>m>>x;
    int a[n];
    int b[n];
    set(a,n,0)
    a[x-1]++;
    set(b,n,0)
    int y;
    char q;
    for(int i=1;i<=m;i++)
    {
        cin>>y>>q;
        if(i%2==1)
        {
            set(b,n,0)
            if(q=='0')
            {
                for(int j=0;j<n;j++)
                {
                    
                    if(a[j]==1)b[(j+y)%n]=1;
                }
            }
            else if(q=='1')
            {
                for(int j=0;j<n;j++)
                {
                    
                    if(a[j]==1)b[(j+n-y)%n]=1;
                }
            }
            else
            {
                for(int j=0;j<n;j++)
                {
                    
                    if(a[j]==1)
                    {
                        b[(j+n-y)%n]=1;
                        b[(j+y)%n]=1;
                    }
                }
            }
        }
        else
        {
            set(a,n,0)
            if(q=='0')
            {
                for(int j=0;j<n;j++)
                {
                    
                    if(b[j]==1)a[(j+y)%n]=1;
                }
            }
            else if(q=='1')
            {
                for(int j=0;j<n;j++)
                {
                    
                    if(b[j]==1)a[(j+n-y)%n]=1;
                }
            }
            else
            {
                for(int j=0;j<n;j++)
                {
                    
                    if(b[j]==1)
                    {
                        a[(j+n-y)%n]=1;
                        a[(j+y)%n]=1;
                    }
                }
            }
        }
    }
    //out(b,n,'\n')
    vector<int> s;
    if(m%2==0)
    {   int count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                count++;
                s.push_back(i+1);
            }
        }
        cout<<count<<endl;
        for(int i=0;i<count;i++)
        {cout<<s[i]<<" ";}
    }
    else
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==1)
            {
                count++;
                s.push_back(i+1);
            }
        }
        cout<<count<<endl;
        for(int i=0;i<count;i++)
        {cout<<s[i]<<" ";}
    }
    cout<<endl;
  }
  return 0;
}