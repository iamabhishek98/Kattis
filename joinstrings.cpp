#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<ll,list<string>> input;
    ll n; cin>>n;
    cin.ignore();
    for (ll i = 1; i <= n; i++) {
        string s; cin>>s;
        input[i].push_back(s);
    }
    for (ll i = 0; i < n-1; i++) {
        ll x,y; cin>>x>>y;
        list<string>::iterator it = input[x].end();
        input[x].splice(it,input[y]);
    }
    for (auto &i: input) {
        if (!i.second.empty()) {
        for (auto &j:i.second) cout<<j;
        }
    }
}
