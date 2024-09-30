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
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    string s;
    cin>>s;
    int i=0;
    while(i<s.size())
    {
        if(s[i]!=s[0])
        {
            cout<<"YES"<<endl;
            swap(s[i],s[0]);
            cout<<s<<endl;
            break;
        }
        i++;
    }
    if(i==s.size())
    {
        cout<<"NO"<<endl;
    }
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
// void swap(int a, int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main() {
//   int TestCases;
//   cin >> TestCases;
//   while (TestCases--)
//   {
//     char a[10];
//     string word;
//     cin >> word;
//     strcpy(a, word.c_str());
//     bool test;
//     int k=word.length();
//     rp(k){
//         if(a[0]==a[i]){
//             test=true;
//         }
//         else test=false;
//     }
//     if(word.length()==1){
//         cout << "NO" << endl;
//     }
//     else if(test==true){
//         cout << "NO" << endl;
//     }
//     else {
//         cout << "YES" << endl;
//         for(int i=0;i<k;i++){
//             for(int j=i+1;j<k;j++){
//                 if(a[i]!=a[j]){
//                     swap(a[i],a[j]);
//                     break;
//                 }
//                 else{
//                     continue;
//                 }
//             }
//         }
//         for(int i=0;i<k-1;i++){
//             cout << a[i];
//         }
//         cout<<a[k-1]<<endl;
//     }
//   }
//   return 0;
// }