#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t;
	cin>>t;
	char queue[n+1];
	cin>>queue;
	for(int i=1;i<=t;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(queue[j]=='B'&& queue[j+1]=='G')
			{
				swap(queue[j],queue[j+1]);
				j++;
			}
		}
	}
	cout<<queue;
}

