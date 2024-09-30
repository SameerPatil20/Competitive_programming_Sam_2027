// #include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int main(){
	{
	// // Providing a seed value
	// srand(time(0));

	// // Get a random number
	// int random = rand();

	// // Print the random number
    // for(int i=0;i<10;i++)
	// cout<<rand()<<endl;
	// return 1;
	// priority_queue<int> pq;
	// pq.push(10);
	// pq.push(20);
	// int s=pq.top();
	// cout<<s<<endl;
    // pq.pop();
	// vector<int> v;
	// v.push_back(1);
	// v.push_back(2);
	// int c=v.emplace_back(5);
	// cout<<v[2];
	// multiset<int, greater<int> > value;
	// value.insert(10);
	// value.insert(20);
	// value.insert(30);
	// value.insert(20);
	// value.erase(value.find(20));
	// for (auto const& elem : value) {
    //     std::cout << elem << " ";
    //  }
	// map<int,int> mp;
	// mp[0]=0;
	// mp[1]=1;
	// cout<<mp.size()<<endl;
	// mp[1]--;
	// cout<<mp.size()<<endl;
	// mp.erase(0);
	// cout<<mp.size()<<endl;
	}
	int dividend;
	cin>>dividend;
	int divisor;
	cin>>divisor;
	long long di=dividend;
        di=abs(di);
        long long d=divisor;
        d=abs(d);
	cout<< (di/d)*(1-2*((divisor>0 && dividend<0) || (divisor<0 && dividend>0)));


}

// #include<bits/stdc++.h>
// #define rp(n) for(decltype(n) i=0;i<n;i++)
// #define rp2(n,j) for(decltype(n) j=0;j<n;j++)
// #define ll long long int
// #define set(a,n,k) for(int lambda=0;lambda<n;lambda++){a[lambda]=k;}
// #define out(a,n,k) for(int lambda=0;lambda<n;lambda++){cout<<a[lambda]<<k;}
// #define ain(a,n) for(int lambda=0;lambda<n;lambda++){cin>>a[lambda];}
// #define v1(type,x) type x;cin>>x;
// #define v2(type,x,y) type x,y;cin>>x>>y;
// #define v3(type,x,y,z) type x,y,z;cin>>x>>y>>z;
// #define remax(maxo,new) maxo=max(maxo,new);
// #define endl '\n'
// using namespace std;
// int main() {
//   int TestCases;
//   cin >> TestCases;
//   while (TestCases--)
//   {
// 	int a=5;
// 	int b=6;
// 	remax(a,b)
// 	cout<<a<<" "<<b<<endl;
//   }
//   return 0;
// }
