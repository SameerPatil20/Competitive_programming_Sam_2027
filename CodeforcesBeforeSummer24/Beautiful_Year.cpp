#include<iostream>
using namespace std;
int pow(int x,int t)
{
	int y=1;
	while(t>0){y*=10;t--;}
	return y;
}
int dig(int x,int t)
{
	return((x/pow(10,t))%10);
}
int main()
{
	int x;
	cin>>x;
	x++;
	while(x<9013)
	{
		if(dig(x,3)==dig(x,2))
		{
			x=((x/100)+1)*100+1;
			continue;
		}
		if(dig(x,3)==dig(x,1)||dig(x,2)==dig(x,1))
		{
			x=((x/10)+1)*10;
			continue;
		}
		if(dig(x,3)==dig(x,0)||dig(x,2)==dig(x,0)||dig(x,1)==dig(x,0))
		{
			x++;
			continue;
		}
		else break;
	}
	cout<<x;
}
