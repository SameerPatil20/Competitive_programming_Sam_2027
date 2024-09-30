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
    int n,m,ix,iy,ex,ey;
    cin>>n>>m>>ix>>iy>>ex>>ey;
    string dir,idir;
    cin>>dir;
    idir=dir;
    // bool dir[2];
    // char x;
    // cin>>x;
    // if(x=='U')dir[0]=0;
    // else dir[0]=1;
    // cin>>x;
    // if(x=='R')dir[1]=0;
    // else dir[1]=1;
    int cx=ix,cy=iy;
    bool check=1;
    ll bounce=0;
    while(true)
    {
        // cout<<cx<<" "<<cy<<" "<<dir<<" "<<idir<<endl;
        if(cx==ex && cy==ey)break;
        if(dir=="UL")
        {   
            bounce++;
            if(cx==1 && cy==1)dir="DR";
            else if(cx==1)dir="DL";
            else if(cy==1)dir="UR";
            else
            {
                bounce--;
                cx--;
                cy--;
            }
        }
        else if(dir=="UR")
        {
            bounce++;
            if(cx==1 && cy==m)dir="DL";
            else if(cx==1)dir="DR";
            else if(cy==m)dir="UL";
            else
            {
                bounce--;
                cx--;
                cy++;
            }
        }
        else if(dir=="DR")
        {
            bounce++;
            if(cx==n && cy==m)dir="UL";
            else if(cx==n)dir="UR";
            else if(cy==m)dir="DL";
            else
            {
                bounce--;
                cx++;
                cy++;
            }
        }
        else if(dir=="DL")
        {
            bounce++;
            if(cx==n && cy==1)dir="UR";
            else if(cx==n)dir="UL";
            else if(cy==1)dir="DR";
            else
            {
                bounce--;
                cx++;
                cy--;
            }
        }
        if(cx==ix && cy==iy)
        {

            if(check==0 && dir==idir)
            {
                bounce=-1;
                break;
            }
            else if(check==1)
            {check=0;
            idir=dir;}
        }
    }
    cout<<bounce<<endl;
  }
  return 0;
}