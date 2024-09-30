#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
void checkRow(int n,int row,int &count,vector<int> placedQueens)
{
    if(row==n)
    {
        count++;
        return;
    }
    for(int col=0;col<n;col++)
    {
        bool safe=1;
        for(int i=0;i<row;i++)
        {
            if(col==placedQueens[i] || row-i==abs(placedQueens[i]-col))
            {
                safe=0;
            }
        }
        if(safe)
        {
            placedQueens.push_back(col);
            checkRow(n,row+1,count,placedQueens);
            placedQueens.pop_back();
        }
    }
}
ll nQueens(int n)
{
    vector<int> placedQueens;
    int row=0;
    int count=0;
    checkRow(n,row,count,placedQueens);
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<nQueens(n)<<endl;
}