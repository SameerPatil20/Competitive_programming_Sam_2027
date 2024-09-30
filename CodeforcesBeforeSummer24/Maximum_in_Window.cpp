#include<bits/stdc++.h>
using namespace std;

void add(deque<int> &d, int x)
{
    while(!d.empty() && d.back() < x)
        d.pop_back();
    d.push_back(x);
    return;
}

void rem(deque<int> &d, int x) 
{
    assert(!d.empty());
    if(d.front() == x) d.pop_front();
    return;
}

int main()
{
    int T; cin >> T;
    while(T--) {
        int n, k; cin >> n >> k;
        int A[n];

        for(int i = 0; i < n; i++)
            cin >> A[i];

        deque<int> d;

        for(int i = 0; i < k; i++)
            add(d, A[i]);

        for(int i = 0; i <= n - k; i++) {
            cout << d.front() << " "<<d.size()<<endl;
            rem(d, A[i]);
            cout <<d.size()<<endl;
            if(i + k < n) add(d, A[i + k]);
            cout<<d.size()<<endl;
        }

        cout <<endl;
    }
    return 0;
}
