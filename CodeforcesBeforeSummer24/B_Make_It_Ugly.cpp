#include<bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vc vector<char>
using namespace std;

int smallest(int x, int y, int z) {

  int smallest = 99999;

  if (x < smallest)
    smallest=x;
  if (y < smallest)
    smallest=y;
  if(z < smallest)
    smallest=z;

  return smallest;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vi vec;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i=0;
        int count =0;
        while(i<n){
            if(a[i-1] != a[i] && a[i-1]==a[i+1]){
                vec.push_back(i);
                i+=2;
            }
            else{
                count++;
                i++;
            }
        }
        if(count == n){
            cout<<-1<<endl;
        }
        else{
        int s=vec.size();
        int mn=10000000;
        for(int i=1;i<vec.size();i++){
            int diff = vec.at(i)-vec.at(i-1);
            mn =min(diff,mn);
        }
        mn = mn-1;
        int result = smallest(mn,vec.at(0),n-vec.at(s-1)-1);
        cout<<result<<endl;
        }
    }
    return 0;
}