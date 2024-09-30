#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int check[3];
	check[0]=check[1]=check[2]=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		check[0]+=x;
		cin>>x;
                check[1]+=x;
		cin>>x;
                check[2]+=x;
	}
	if(check[0]==0&&check[1]==0&&check[2]==0)
	{
		cout<<"YES";
	}
	else cout<<"NO";
}
