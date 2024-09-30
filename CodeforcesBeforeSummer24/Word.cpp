#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin>>s;
    int m=s.size();
    string C;
    int a=0,A=0;
    for(int i=0;i<m;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            A++;
            C+=s[i];
            s[i]+=32;
        }
        else if(s[i]>=97&&s[i]<=122){
            a++;
            C+=s[i]-32;
        }
    }
    
    if(A>a)cout<<C;
    else cout<<s;
    return 0;
}
