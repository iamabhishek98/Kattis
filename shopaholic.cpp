#include <bits/stdc++.h>
using namespace std;

int main() {
    long n; cin>>n;
    deque<long> items;
    for (long i = 0; i < n; i++) {
        long x; cin>>x;
        items.push_back(x);
    }
    sort (items.begin(), items.end(),greater<long>());
    long discount = 0;
    for (long i = 0; i+2 < n; i+=3) {
        items.pop_front();
        items.pop_front();
        long x = items.front();
        items.pop_front();
        discount += (x);
    }
    cout<<discount;
}
