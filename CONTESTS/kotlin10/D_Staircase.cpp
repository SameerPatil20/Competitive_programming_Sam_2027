#include<bits/stdc++.h>
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--)
  {
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    long long int total=0;
    while(i<n)
    {
        if(a[i]==0)
        {
            i++;
            continue;
        }
        else
        {
            long long int sum=0;
            long long int maxi=0;
            int j=i;
            while(j<n && a[j]!=0)
            {
                if((j-i)%2==0)maxi=max(maxi,a[j]);
                sum+=a[j];
                j++;
            }
            if((j-i)%2==0)
            {
                total+=sum*2;
            }
            else
            {
                total+=sum*2-maxi;
            }
            i=j;
        }
    }
    cout<<total<<endl;
  
  }
  return 0;
}