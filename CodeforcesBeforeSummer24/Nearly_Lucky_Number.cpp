#include <iostream>

using namespace std;

int main() {
    char a[20];
    cin>>a;
    int j=0;
    for(int i=0;i<20;i++)
    {
        if(a[i]=='\0')break;
        if(a[i]=='4'|| a[i]=='7')j++;
    }
    if(j==4|| j==7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}