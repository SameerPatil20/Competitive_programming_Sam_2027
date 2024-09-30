#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vi;
int main(){
	long long testcases;
	cin>>testcases;
	for(long long qwe=0; qwe<testcases; qwe++){
		long long m,x;
		cin>>m>>x;
		long long cost[m+1],happiness[m+1];
		long long totalhappy=0;
		for(long long p=1; p<=m; p++) {
			cin>>cost[p];
			cin>>happiness[p];
			totalhappy+=happiness[p];
		}
		long long hap[totalhappy+1];
		long long temp[totalhappy+1];
		memset(hap,-1,sizeof(hap));
		hap[0]=0;
		if(cost[1]==0) hap[happiness[1]]=0;
		for(long long r=2; r<=m; r++){
			memset(temp,-1,sizeof(temp));
			for(long long f=0; f<totalhappy+1; f++){
				if(hap[f]<0) {temp[f]=max(hap[f],temp[f]);continue;}
				else{
					temp[f]=max(x+hap[f],temp[f]);
					if(x+hap[f]>=cost[r]){
						temp[f+happiness[r]]=max(hap[f]+x-cost[r],hap[f+happiness[r]]);
					}
				}
			}
			for(long long y=0; y<totalhappy+1; y++) hap[y]=temp[y];	
		}
		long long y=0;
		for(long long b=0; b<totalhappy+1; b++){
			if (hap[b]>=0) y=b;
		}
		cout<<y<<'\n';
	}
}