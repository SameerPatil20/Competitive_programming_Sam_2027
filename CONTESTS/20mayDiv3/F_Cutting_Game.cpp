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
// int main() {
//   int TestCases;
//   cin >> TestCases;
//   while (TestCases--)
//   {
//     int a,b,n,m;
//     cin>>a>>b>>n>>m;
//     multiset<pair<int,int>, greater<pair<int,int>> > valuer;
//     multiset<pair<int,int>, greater<pair<int,int>> > valuec;
//     rp(n)
//     {
//         int x,y;
//         cin>>x>>y;
//         valuer.insert(make_pair(x,y));
//         valuec.insert(make_pair(y,x));
//     }
//     int alice=0;
//     int bob=0;
//     rp(m)
//     {
//         char c;
//         cin>>c;
//         int k;
//         cin>>k;
//         if(c=='U')
//         {
//             auto it=valuer.lower_bound(make_pair(k,0));
//             while(it!=valuer.begin())
//             {
//                 if(i%2==0)alice++;
//                 else bob++;
//                 valuer.erase(it);
//             }
//         }
        
//     }
//   cout<<alice<<" "<<bob<<endl;
//   }
//   return 0;
// }

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll a , b , n , m;
        cin >> a >> b >> n >> m;
        vector<ll> x(n) , y(n);
        multiset<pair<ll , ll> > p , q;
        for(ll i = 0 ; i < n ; i++)
        {
            cin >> x[i] >> y[i];
            p.insert({x[i] , y[i]});
            q.insert({y[i] , x[i]});
        }
        ll g = 0 , h = 0;
        ll r = b+1 , l = 0 , u = 0 , d = a+1;
        for(ll i = 1 ; i <= m ; i++)
        {
            ll coins = 0;
            ll z;
            char c;
            cin >> c >> z;
            multiset<pair<ll , ll> > temp;
            if(c == 'U')
            {
                u += z;
                auto it = p.begin();
                while(it != p.lower_bound({u+1 , 0}))
                {
                    temp.insert(*it);
                    q.erase({(*it).second , (*it).first});
                    coins++;
                    it++;
                    // cout << "U" << " ";
                }
                for(auto &x:temp)
                {
                    p.erase(x);
                }
            }
            else if(c == 'D')
            {
                d -= z;
                auto it = p.end();
                while (it != p.lower_bound({d-1 , b+1}))
                {
                    it--;
                    coins++;
                    temp.insert(*it);
                    q.erase({(*it).second , (*it).first});
                    // cout << "D" << " ";
                }
                for(auto x:temp)
                {
                    p.erase(x);
                }
            }
            else if(c == 'L')
            {
                l += z;
                auto it = q.begin();
                while(it != q.lower_bound({l+1 , 0}))
                {
                    temp.insert(*it);
                    p.erase({(*it).second , (*it).first});
                    coins++;
                    it++;
                    // cout << "R" << " ";
                }
                for(auto &x:temp)
                {
                    q.erase(x);
                }
            }
            else
            {
                r -= z;
                auto it = q.end();
                while (it != q.lower_bound({r-1 , a+1}))
                {
                    it--;
                    coins++;
                    temp.insert(*it);
                    p.erase({(*it).second , (*it).first});
                    // cout << "L" << " ";
                }
                for(auto x:temp)
                {
                    q.erase(x);
                }
            }
            if(i%2 == 1)
            {
                g += coins;
            }
            else
            {
                h += coins;
            }
        }
        cout << g << " " << h << endl;
    }
}