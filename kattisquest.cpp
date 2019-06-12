#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin>>n;
    map<ll,priority_queue<ll>> quests;
    for (long i = 0; i < n; i++) {
        string s; cin>>s;
        if (s=="add") {
            ll x, y; cin>>x>>y;
            quests[-x].push(y);
        }
        else if (s=="query") {
            ll x; cin>>x; ll gold = 0;
            bool status = true; ll value = x;
            while (quests.lower_bound(-x) != quests.end()) {
                gold += (quests.lower_bound(-x)->second.top());
                quests.lower_bound(-x)->second.pop();
                ll temp = quests.lower_bound(-x)->first;
                if (quests.lower_bound(-x)->second.size()==0) {
                        quests.erase(quests.lower_bound(-x));
                }
                x-=(-temp);
             }
            cout<<gold<<endl;
        }
    }
}
