// #include<iostream>
// #include<vector>
// #include<cmath>
// #define rp(n) for(decltype(n) i=0;i<n;i++)
// #define rpv(n,j) for(decltype(n) j=0;j<n;j++)
// #define ll long long
// using namespace std;
// int numbin(ll int a,int b[])
// {
//     int ans=0;
//     while(a>=1)
//     {
//         b[ans]=a%2;
//         a=a/2;
//         ans++;
//     }
//     return ans;
// }
// int main() {
//   int TestCases;
//   cin >> TestCases;
//   while (TestCases--) {
//     // Your code here
//     ll int a,b,r,answer=0;
//     cin>>a>>b>>r;
//     //a=abs(a-b);
//     int ad=a;
//     int bd=b;
//     if(r<max(a,b))
//     {
//         int p[100];
//         int h[100];
//         int q[100];
//         rp(100)
//         {
//             p[i]=0;
//             q[i]=0;
//             h[i]=0;
//         }
//         int psize=numbin(a,p);
//         int hsize=numbin(b,h);
//         int qsize=numbin(r,q);
//         int z=min(psize,hsize);
//         int s=qsize;
//         //cout<<r<<endl;
//         while(s>0)
//         {
//             if(p[s-1]==1 && q[s-1]==1 && h[s-1]==1)
//             {
//                 int d=s;
//                 while(d>0)
//                 {
//                     q[d-1]=1;
//                     d--;
//                 }
//             }
//             else if(p[s-1]==1 && q[s-1]==1 && h[s-1]==0)
//             {
//                 if(b<a)
//                 {
//                     q[s-1]=0;
//                     a=a-pow(2,s-1);
//                     b=b+pow(2,s-1);
//                 }
//             }
//             else if(p[s-1]==0 && q[s-1]==1 && h[s-1]==1)
//             {
//                 if(a>b)
//                 {q[s-1]=0;
//                 a=a+pow(2,s-1);
//                     b=b-pow(2,s-1);}
//             }
//             s--;
//             //cout<<r<<endl;
//         }
//         int u=1;
//         r=0;
//         for(int i=0;i<qsize;i++)
//         {
//            // cout<<q[i]<<endl;
//             r+=q[i]*u;
//         u*=2;
//         }
//         //cout<<r<<endl;
//         answer=abs(ad^r-bd^r);
//     }
//     cout<<answer<<endl;
//   }
//   return 0;
// }
#include <iostream>
// #include<string>
// #include<algorithm>
#include <cmath>
#include <vector>
// #include <bits/stdc++.h>

using ll = long long int;
#define fo(i, n) for (int i = 0; i < n; i++)
#define swap(a, b) \
    {              \
        a ^= b;    \
        b ^= a;    \
        a ^= b;    \
    }

#define pb push_back
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    fo(t, testCases)
    {
        vector<ll> N;
        ll n;
        ll m;
        ll r;
        cin >> n >> m >> r;
        ll n1 = n;
        ll m1 = m;
        while (n != 0)
        {
            N.pb(n % 2);
            n = n / 2;
        }
        int i = 0;
        while (m != 0)
        {
            if (i < N.size())
            {
                N[i] -= m % 2;
            }
            else
            {
                N.pb((-1) * (m % 2));
            }
            m = m / 2;
            i++;
        }
        vector<ll> R;
        while (r != 0)
        {
            R.pb(r % 2);
            r = r / 2;
        }
        vector<ll> max;
        int size = N.size();
        int elem = 0;
        for (int i = size - 1; i >= 0; i--)
        {
            if (N[i] != 0 && elem == 0)
            {
                elem = N[i];
                size = i;
                break;
            }
        }
        fo(i, size)
        {
            if (N[i] == elem)
            {
                max.pb(1);
            }
            else
            {
                max.pb(0);
            }
        }
        if (R.size() > max.size())
        {
        }
        else
        {
            for (int i = max.size() - 1; i >= 0; i--)
            {
                if (i >= R.size())
                {
                    max[i] = 0;
                }
                else
                {
                    if (R[i] == 1 && max[i] == 0)
                    {
                        break;
                    }
                    else if (R[i] == 0 && max[i] == 1)
                    {
                        max[i] = 0;
                    }
                }
            }
        }
        ll maxv = 0;
        for (int i=max.size()-1;i>=0;i--)
        {
            maxv *=2;
            maxv += max[i];
        }
        ll n2 = n1 ^ maxv;
        ll m2 = m1 ^ maxv;
        cout << abs(n2 - m2) << endl;
    }
}