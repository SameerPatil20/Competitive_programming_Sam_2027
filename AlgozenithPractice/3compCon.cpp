#include<bits/stdc++.h>
#define ll long long int
#define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
#define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
#define endl '\n'
using namespace std;
int n,m;
int dist[3][1001][1001];
char a[1001][1001];
void BFS(deque<pair<int,int>> s,int c)
{
    while(!s.empty())
    {
        int x=s.front().first;
        int y=s.front().second;
        s.pop_front();
        if(x>0 && a[x-1][y]!='#')
        {
            int weigh=(a[x-1][y]=='.');
            if(dist[c][x-1][y]==-1 || dist[c][x-1][y]>dist[c][x][y]+weigh)
            {
                dist[c][x-1][y]=dist[c][x][y]+weigh;
                if(weigh==1)s.push_back({x-1,y});
                else s.push_front({x-1,y});
            }
        }
        if(x<n-1 && a[x+1][y]!='#')
        {
            int weigh=(a[x+1][y]=='.');
            if(dist[c][x+1][y]==-1 || dist[c][x+1][y]>dist[c][x][y]+weigh)
            {
                dist[c][x+1][y]=dist[c][x][y]+weigh;
                if(weigh==1)s.push_back({x+1,y});
                else s.push_front({x+1,y});
            }
        }
        if(y>0 && a[x][y-1]!='#')
        {
            int weigh=(a[x][y-1]=='.');
            if(dist[c][x][y-1]==-1 || dist[c][x][y-1]>dist[c][x][y]+weigh)
            {
                dist[c][x][y-1]=dist[c][x][y]+weigh;
                if(weigh==1)s.push_back({x,y-1});
                else s.push_front({x,y-1});
            }
        }
        if(y<m-1 && a[x][y+1]!='#')
        {
            int weigh=(a[x][y+1]=='.');
            if(dist[c][x][y+1]==-1 || dist[c][x][y+1]>dist[c][x][y]+weigh)
            {
                dist[c][x][y+1]=dist[c][x][y]+weigh;
                if(weigh==1)s.push_back({x,y+1});
                else s.push_front({x,y+1});
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    memset(dist,-1,sizeof(dist));
    deque<pair<int,int>> s1;
    deque<pair<int,int>> s2;
    deque<pair<int,int>> s3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='1')
            {
                s1.push_back({i,j});
                dist[0][i][j]=0;
            }
            if(a[i][j]=='2')
            {
                s2.push_back({i,j});
                dist[1][i][j]=0;
            }
            if(a[i][j]=='3')
            {
                s3.push_back({i,j});
                dist[2][i][j]=0;
            }
        }
    }
    BFS(s1,0);
    BFS(s2,1);
    BFS(s3,2);
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(dist[0][i][j]!=-1 && dist[1][i][j]!=-1 && dist[2][i][j]!=-1)
            {
                mini=min(mini,dist[0][i][j]+dist[1][i][j]+dist[2][i][j]-2*(a[i][j]=='.'));
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<dist[0][i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<dist[1][i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<dist[2][i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<mini<<endl;
    return 0;
}