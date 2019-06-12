#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct str {
    ll pos;
    ll attack;
    ll defense;
    ll health;
};

bool compare1 (const str &a, const str &b) {
    return a.attack>b.attack;
}
bool compare2 (const str &a, const str &b) {
    return a.defense>b.defense;
}
bool compare3 (const str &a, const str &b) {
    return a.health>b.health;
}

int main() {
    vector<str> input;
    ll n; cin>>n; ll num; cin>>num;
    for (ll i = 0; i < n; i++) {
        str x; cin>>x.attack>>x.defense>>x.health; x.pos=i;
        input.push_back(x);
    }
    set<ll> output;
    sort(input.begin(),input.end(),compare1);
    for (ll i =0; i < num; i++) {
        output.insert(input[i].pos);
    }
    sort(input.begin(),input.end(),compare2);
    for (ll i =0; i < num; i++) {
        output.insert(input[i].pos);
    }
    sort(input.begin(),input.end(),compare3);
    for (ll i =0; i < num; i++) {
        output.insert(input[i].pos);
    }
    cout<<output.size();
}
