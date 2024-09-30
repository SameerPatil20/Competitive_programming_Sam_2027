#include<iostream>
using namespace std;
int main (){
    int t,n;
    cin>> t;
    int m[t+1];
    for(int i=0; i<=t; i++){
	    m[i]=0;
    }
   
    for(int i=1; i<=t; i++){
        cin >> n;
        char k;
        int p=0;
        for(int j=1; j<=n; j++){
                                cin >> k;
                                if(k=='@'){m[i]++; }
                                if(p==1){
                                         if(k=='*'){p++;}
                                         else {p=0;}
                                        }
                                if(p==2){break;}
                                if(k=='*'){p++;}
 
                               }
                          }    
    for(int a=1; a<=t; a++){
        cout<< m[a]<<endl;
    }
}
