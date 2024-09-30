#include<bits/stdc++.h>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rp2(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long int
#define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define v1(type,x) type x;cin>>x;
#define v2(type,x,y) type x,y;cin>>x>>y;
#define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
#define endl '\n'
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int m,x;
    cin>>m>>x;
    int c[m];
    ain(c,m)
    priority_queue<int> queue;
    int money=0;
    for(int i=0;i<m;i++)
    {
        if(money>=c[i])
        {
            queue.push(c[i]);
            money+=x;
            money-=c[i];
            continue;
        }
        if(queue.empty())
        {
            money+=x;
            continue; 
        }
        if(c[i]<queue.top())
        {
            queue.push(c[i]);
            money+=x;
            money+=queue.top();
            money-=c[i];
            queue.pop();
            continue;
        }
        money+=x;
    }
    cout<<queue.size()<<endl;
  }
  return 0;
}