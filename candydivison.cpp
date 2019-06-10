#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void factors(ll n) {
    set<ll> output;
    for (ll i = 1; i < sqrt(n)+2; i++) {
        if (n%i==0) {
            output.insert(i); output.insert(n/i);
        }
    }
    for (auto &i: output) {
        cout<<i-1<<" ";
    }
}

int main () {
    ll n; cin>>n;
    factors(n);
}
