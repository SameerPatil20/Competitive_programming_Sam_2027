#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char p[t];
	int q[t];
	for(int i=0;i<t;i++)
	{
		cin>>p[i];
		cin>>q[i];
	}
	for(int j=0;j<t;j++)
	{
		for(char a=97;a<=104;a++)
		{
			if(a!=p[j])cout<<a<<q[j]<<endl;
		}
		for(int i=1;i<9;i++)
		{
			if(i!=q[j])cout<<p[j]<<i<<endl;
		}
	}
}
