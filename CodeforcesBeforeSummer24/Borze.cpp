#include<iostream>
#include<string>
using namespace std;
void borze(char s[])
{
	if(s[0]=='\0') return;
	if(s[0]=='.')
	{
		cout<<"0";
		borze(s+1);
	}
	else if(s[1]=='.')
	{
		cout<<"1";
		borze(s+2);
	}
	else if(s[1]=='-')
        {
                cout<<"2";
                borze(s+2);
        }
	return;
}
int main()
{
	char s[201];
	cin>>s;
	borze(s);
}

