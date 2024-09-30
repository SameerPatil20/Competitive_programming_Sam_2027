#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string q;
		cin>>q;
		vector<int> m;
		int M=-1;
		vector<int> n;
		int N=-1;
		int a=0;
		while(q[a]!='\0')
		{
			if((q[a]=='b')&&(M!=-1))
			{
				q[m[M]]='b';
				m.pop_back();
				M--;
			}
			else if((q[a]=='B')&&(N!=-1))
			{
				q[n[N]]='B';
				n.pop_back();
				N--;
			}
			else if((q[a]>=65)&&(q[a]<=90)){n.push_back(a);N++;}
			else {m.push_back(a);M++;}
			a++;
		}
		int s=0;
		while(q[s]!='\0')
		{
			if(q[s]!=66&&q[s]!=98)cout<<q[s];
			s++;
		}
		cout<<endl;
		

	}
}
