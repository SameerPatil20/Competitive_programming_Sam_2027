#include<iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=s.size();
    int count=0;
    bool a[26];
    int i=0;
    while(i<26)
    {
        a[i]=true;
        i++;
    }
    i=0;
    while(i<n)
    {
        if(a[s[i]-'a']==true)
        {
            a[s[i]-'a']=false;
            count++;
        }
        i++;  
    }
    if(count%2)cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
}