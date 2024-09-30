// #include<bits/stdc++.h>
// #define rp(n) for(decltype(n) i=0;i<n;i++)
// #define rp2(n,j) for(decltype(n) j=0;j<n;j++)
// #define ll long long int
// #define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
// #define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
// #define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
// #define v1(type,x) type x;cin>>x;
// #define v2(type,x,y) type x,y;cin>>x>>y;
// #define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
// #define remax(maxo,new) maxo=max(maxo,new);
// #define endl '\n'
// using namespace std;
// int n;
// string s;
// struct node{
//     // bool walk;
//     bool open;
//     bool close;
//     int lr;
//     int lrf;
//     int rrf;
//     int rr;
//     char fir;
//     char sec;
//     node (){}
//     node(char c)
//     {
//         // walk=0;
//         open=0;
//         close=0;
//         fir=c;
//         sec=c;
//         if(c=='(')
//         {
//             lr=0;
//             rr=1;
//         }
//         if(c==')')
//         {
//             lr=1;
//             rr=0;
//         }
//         int lrf=0;
//         int rrf=0;
//     }
// };
// node tree[800080];
// void merge(int id)
// {
//     tree[id].fir=tree[id<<1].fir;
//     tree[id].sec=tree[id<<1|1].sec;

//     tree[id].open=tree[id<<1].open||tree[id<<1|1].open;
//     tree[id].close=tree[id<<1].close||tree[id<<1|1].close;
//     if(tree[id<<1].sec=='(' && tree[id<<1|1].fir=='(')
//     {
//         tree[id].open=1;
//     }
//     if(tree[id<<1].sec==')' && tree[id<<1|1].fir==')')tree[id].close=1;
//     bool t1=tree[id<<1].open||(tree[id<<1].sec=='(' && tree[id<<1|1].fir=='(');
//     bool t2=tree[id<<1|1].close||(tree[id<<1].sec==')' && tree[id<<1|1].fir==')');
//     int d1=tree[id<<1].rr;
//     if(t2)
//     {
//         d1=d1%2;
//     }
//     int d2=tree[id<<1|1].lr;
//     if(t1)
//     {
//         d2=d2%2;
//     }
//     if(d1<=d2)
//     {
//         d2-=d1;
//         d1=0;
//     }
//     else if(d1>d2)
//     {
//         d1-=d2;
//         d2=0;
//     }
//     tree[id].lr=tree[id<<1].lr+d2;
//     tree[id].rr=tree[id<<1|1].rr+d1;
// }
// void build(int id,int l, int r)
// {
//     if(l==r)
//     {
//         tree[id]=node(s[l]);
//         return;
//     }
//     int mid=(l+r)>>1;
//     build(id<<1,l,mid);
//     build(id<<1|1,mid+1,r);
//     merge(id);
// }
// void update(int id, int l, int r, int pos)
// {
//     if(l==r)
//     {
//         tree[id]=node(s[l]);
//         return;
//     }
//     if(pos<l || pos>r)return;
//     int mid=(l+r)>>1;
//     build(id<<1,l,mid);
//     build(id<<1|1,mid+1,r);
//     merge(id);
// }
// int main() {
//     int q;
//     cin>>n>>q;
//     cin>>s;
//     build(1,0,n-1);

//     while(q--)
//     {
//         int x;
//         cin>>x;
//         if(s[x-1]=='(')s[x-1]=')';
//         else s[x-1]='(';
//         update(1,0,n-1,x-1);
//         cout<<tree[1].open<<" "<<tree[1].close<<endl;
//         if(tree[1].lr==0 && tree[1].rr==0)cout<<"YES"<<endl;
//         if(n>=4)
//         {
//             if(s[0]=='(' && s[1]=='(' && )
//         }
//         else{
//             if(q==131054-194)cout<<"NO"<<s<<tree[1].lr<<tree[1].rr<<endl;
//             else cout<<"NO"<<endl;
//         }
//         // cout<<tree[1].value<<endl;
//         // if((abs(tree[1].value))%2==0)
//         // {
//         //     if(tree[1].value==0)
//         //     {
//         //         cout<<"YES"<<endl;
//         //     }
//         //     else if(tree[1].value>0 && tree[1].close==1)
//         //     {
//         //         cout<<"YES"<<endl;
//         //     }
//         //     else if(tree[1].value<0 && tree[1].open==1)
//         //     {
//         //         cout<<"YES"<<endl;
//         //     }
//         //     else 
//         //     {
//         //         cout<<"NO"<<endl;
//         //     }
//         // }
//         // else{
//         //     cout<<"NO"<<endl;
//         // }
//     }
// }

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
#define remax(maxo,new) maxo=max(maxo,new);
#define endl '\n'
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    int q;
    cin>>q;
    cin>>s;
    multiset<int> ms;
    rp(n)
    {
        if(i%2==0 && s[i]==')')
        {
            ms.insert(i);
        }
        else if(i%2==1 && s[i]=='(')
        {
            ms.insert(i);
        }
    }
    rp(q)
    {
        int x;
        cin>>x;
        if(n%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        x--;
        if(x%2==0)
        {
            if(s[x]=='(')
            {
                s[x]=')';
                ms.insert(x);
            }
            else{
                s[x]='(';
                ms.erase(ms.find(x));
            }
        }
        else{
            if(s[x]==')')
            {
                s[x]='(';
                ms.insert(x);
            }
            else{
                s[x]=')';
                ms.erase(ms.find(x));                
            }
        }
        if(ms.size()==0)
        {
            cout<<"YES"<<endl;
        }
        else if(*ms.begin()%2==0)
        {
            cout<<"NO"<<endl;
        }
        else if(*ms.rbegin()%2==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}