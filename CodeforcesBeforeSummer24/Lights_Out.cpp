#include<iostream>
using namespace std;
int main()
{
	bool lights[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			lights[i][j]=1;
		}
	}
	for(int i=1;i<4;i++)
        {
                for(int j=1;j<4;j++)
                {
                        int x;
			cin>>x;
			if((x%2)==1)
			{
				lights[i][j]=!(lights[i][j]);
				lights[i-1][j]=!(lights[i-1][j]);
				lights[i][j-1]=!(lights[i][j-1]);
				lights[i][j+1]=!(lights[i][j+1]);
				lights[i+1][j]=!(lights[i+1][j]);
			}
                }
        }
	for(int i=1;i<4;i++)
        {
                for(int j=1;j<4;j++)
                {
                        cout<<lights[i][j];
                }
		cout<<endl;
        }
}
