#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define rp(n) for(decltype(n) i=0;i<n;i++)
#define rpv(n,j) for(decltype(n) j=0;j<n;j++)
#define ll long long
using namespace std;
int main() {
  int TestCases;
  cin >> TestCases;
  while (TestCases--) {
    // Your code here
    int n;
    cin>>n;
    char trump;
    cin>>trump;
    
    vector<int> C;
    vector<int> D;
    vector<int> H;
    vector<int> S;
    int x;
    char y;
    for(int i=0;i<2*n;i++)
    {
        cin>>x;
        cin>>y;
        if(y=='C')C.push_back(x);
        if(y=='H')H.push_back(x);
        if(y=='D')D.push_back(x);
        if(y=='S')S.push_back(x);
    }
    int csize=C.size();
    int hsize=H.size();
    int dsize=D.size();
    int ssize=S.size();

    int check=0;
    int tsize;
    if(trump!='C')check+=(csize)%2;
    else tsize=csize; 
    if(trump!='H')check+=(hsize)%2;
    else tsize=hsize;
    if(trump!='D')check+=(dsize)%2;
    else tsize=dsize;
    if(trump!='S')check+=(ssize)%2;
    else tsize=ssize;
    //+cout<<tsize<<" "<<check<<endl;
    //cout<<check<<endl;
    if(tsize<check)cout<<"IMPOSSIBLE"<<endl;
    else
    {
        sort(C.begin(),C.end());
        sort(D.begin(),D.end());
        sort(H.begin(),H.end());
        sort(S.begin(),S.end());
        if(trump!='C')
        {
            for(int i=0;i<csize-1;i=i+2)
            {
                cout<<C[i]<<"C "<<C[i+1]<<"C"<<endl;
            }
        }
        if(trump!='H')
        {
            for(int i=0;i<hsize-1;i=i+2)
            {
                cout<<H[i]<<"H "<<H[i+1]<<"H"<<endl;
            }
        }
        if(trump!='D')
        {
            for(int i=0;i<dsize-1;i=i+2)
            {
                cout<<D[i]<<"D "<<D[i+1]<<"D"<<endl;
            }
        }
        if(trump!='S')
        {
            for(int i=0;i<ssize-1;i=i+2)
            {
                cout<<S[i]<<"S "<<S[i+1]<<"S"<<endl;
            }
        }



        if(trump=='C')
        {   int g=0;
        while(g<check)
        {
                if(hsize%2==1)
                {
                    cout<<H[hsize-1]<<"H "<<C[g]<<"C"<<endl;
                    g++;
                }
                if(dsize%2==1)
                {
                    cout<<D[dsize-1]<<"D "<<C[g]<<"C"<<endl;
                    g++;
                }
                if(ssize%2==1)
                {
                    cout<<S[ssize-1]<<"S "<<C[g]<<"C"<<endl;
                    g++;
                }
        }
            for(int i=check;i<tsize;i=i+2)
            {
                cout<<C[i]<<"C "<<C[i+1]<<"C"<<endl;
            }
        }
        if(trump=='H')
        {
            int g=0;
        while(g<check)
        {
                if(csize%2==1)
                {
                    cout<<C[csize-1]<<"C "<<H[g]<<"H"<<endl;
                    g++;
                }
                if(dsize%2==1)
                {
                    cout<<D[dsize-1]<<"D "<<H[g]<<"H"<<endl;
                    g++;
                }
                if(ssize%2==1)
                {
                    cout<<S[ssize-1]<<"S "<<H[g]<<"H"<<endl;
                    g++;
                }
        }
            for(int i=check;i<tsize;i=i+2)
            {
                cout<<H[i]<<"H "<<H[i+1]<<"H"<<endl;
            }
        }
        if(trump=='D')
        
            {   int g=0;
        while(g<check)
        {
                if(hsize%2==1)
                {
                    cout<<H[hsize-1]<<"H "<<D[g]<<"D"<<endl;
                    g++;
                }
                if(csize%2==1)
                {
                    cout<<C[csize-1]<<"C "<<D[g]<<"D"<<endl;
                    g++;
                }
                if(ssize%2==1)
                {
                    cout<<S[ssize-1]<<"S "<<D[g]<<"D"<<endl;
                    g++;
                }
        }
            for(int i=check;i<tsize;i=i+2)
            {
                cout<<D[i]<<"D "<<D[i+1]<<"D"<<endl;
            }
        }
        if(trump=='S')
        
            {   int g=0;
        while(g<check)
        {
                if(hsize%2==1)
                {
                    cout<<H[hsize-1]<<"H "<<S[g]<<"S"<<endl;
                    g++;
                }
                if(dsize%2==1)
                {
                    cout<<D[dsize-1]<<"D "<<S[g]<<"S"<<endl;
                    g++;
                }
                if(csize%2==1)
                {
                    cout<<C[csize-1]<<"C "<<S[g]<<"S"<<endl;
                    g++;
                }
        }
            for(int i=check;i<tsize;i=i+2)
            {
                cout<<S[i]<<"S "<<S[i+1]<<"S"<<endl;
            }
                
        }
        
    }
  }
  return 0;
}