#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    char s[n+1];
    cin>>s;
    int m=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])m++;        
    }
    cout<<m<<endl;
    return 0;
}