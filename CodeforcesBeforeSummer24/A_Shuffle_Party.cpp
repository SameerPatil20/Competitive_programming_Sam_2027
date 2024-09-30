#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int TestCases;
    cin >> TestCases;
    while (TestCases--) {
    int n;
    cin>>n;
    cout<<(1<<(31-__builtin_clz(n)))<<endl;
  }
}
