#include<iostream>
using namespace std;
int bwin(int h,int k,int ax,int ay,int bx,int by);
int awin(int h,int k,int ax,int ay,int bx,int by)
{
    if(bx-ax==1)
    {
        if(abs(ay-by)<=1) return 1;
    }
    else if(ay>1 && ay<h)
    {
        return (bwin(h,k,ax+1,ay-1,bx,by) || bwin(h,k,ax+1,ay,bx,by) || bwin(h,k,ax+1,ay+1,bx,by));
    }
    else if(ay==1)
    {
        return (bwin(h,k,ax+1,ay,bx,by) || bwin(h,k,ax+1,ay+1,bx,by));
    }
    else if(ay==h)
    {
        return (bwin(h,k,ax+1,ay-1,bx,by) || bwin(h,k,ax+1,ay,bx,by));
    }
    return 2;
}
int bwin(int h,int k,int ax,int ay,int bx,int by)
{
    if(bx-ax==1)
    {
        if(abs(ay-by)<=1) return 0;
    }
    else if(by>1 && by<h)
    {
        return (~awin(h,k,ax,ay,bx-1,by+1) || ~awin(h,k,ax,ay,bx-1,by) || ~awin(h,k,ax,ay,bx-1,by-1));
    }
    else if(by==1)
    {
        return (~awin(h,k,ax+1,ay,bx,by) || ~awin(h,k,ax+1,ay+1,bx,by));
    }
    else if(by==h)
    {
        return (~awin(h,k,ax+1,ay-1,bx,by) || ~awin(h,k,ax+1,ay,bx,by));
    }
    return 2;
}
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    int h,k,ax,ay,bx,by;
    cin>>h>>k>>ax>>ay>>bx>>by;
    int a=awin(h,k,ax,ay,bx,by);
    if (a==0)cout<<"Bob"<<endl;
    if (a==1)cout<<"Alice"<<endl;
    if (a==0)cout<<"Draw"<<endl;
  }
  return 0;
}