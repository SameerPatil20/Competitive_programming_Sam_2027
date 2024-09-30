#include<iostream>
#include<math.h>
using namespace std;
int main()
{   
	int t;
	cin>>t;
	int ar[50];
	int r[50];
	int temp =t;
	for(int i=0;i<t;i++)
	{
         	cin>>ar[i];
 	}
 	int p=0;
 	while(t>0)
	{
     		long int s=1;
     		long int temp2=s;
     		while(true)
		{
			temp2=s;                  //add
          		int d=1;
	  		int sum=0;
	  		int z[7];
	  		while(true)
			{ 
		  		long int q=pow(10,d);
		  		if(s/q==0) break;            //change
		  		d++;
			}	
          		for(int k=0;k<d;k++)
			{
               			z[k]=s%10;
	       			s=s/10;
	       			sum=sum+z[k]; 
	  		}
			int g=0;
			for(int e=0;e<d-1;e++)
			{
				for(int f=e+1;f<d;f++)
				{
					if(z[e]==z[f])
					{
						g++;
						break;
					}
				}
			}
          		if((sum==ar[p])&&(g==0))
			{
                		r[p]=temp2;
				break;
	  		}
		        s=temp2;                     //add
          		s++;
     		}
     		t--;
		p++;
 	}
	for(int i=0;i<temp;i++)
	{
      		cout<<r[i]<<endl;
	}	
}
