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
    int n;
    cin>>n;
    int a[n];
    in(a,n)
    bool check=true;
    for(int i=n-1;i>=1;i--)
    {
        if(a[i]>=a[i-1])continue;
        else 
        {
            int x=a[i-1];
            int z;
            z=x%10;
            if(z>a[i])
            {
                check=false;
                break;
            }
            x=x/10;
            while(x>0)
            {
                if(x%10<=z)
                {
                    z=x%10;
                    x=x/10;
                }
                else
                {
                    check=false;
                    break;
                }
            }
            a[i-1]=z; 
        }
    }
    if(check==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
// #include<bits/stdc++.h>
// #define rp(n) for(decltype(n) i=0;i<n;i++)
// #define rp2(n,j) for(decltype(n) j=0;j<n;j++)
// #define ll long long int
// #define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
// #define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
// #define in(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
// using namespace std;
 
// int numDigits(int n)
// {
//     int i=0;
//     while(n!=0)
//     {
//     n=n/10;
//     i++;
//     }
//     return i;
// }
 
// void operation(int *a, int n, int index)
// {
//    int k = numDigits(n);
//    for(int i=(n+k-1);i>=(index+k);i--)
//    {
//     a[i]=a[i-k+1];
//    }
//    for(int i=0;i<k;i++)
//    {
//    int temp = n / (pow(10,k-1-i)) ;
//    a[index+i] = (temp % 10) ;
//    }
// }
// int main() {
//   int TestCases;
//   cin >> TestCases;
//   while (TestCases--)
//   {
//      int n;cin>>n;
//      int a[n+numDigits(n)];
//      bool found=false;
//      rp(n)
//      {
//         cin >> a[i];
//      }
//      rp(n)
//      {
//         operation(a,n,i);
//      }
//      for(int i=0;i<n+numDigits(n);i++)
//      {
//        found = found || (a[i]>a[i+1]);  
//      }
//      if(found==true)
//      { 
//         cout << "YES" << endl;
//      }
//      else cout << "NO" << endl;
//   }
//   return 0;
// }