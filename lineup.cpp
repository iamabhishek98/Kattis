#include <bits/stdc++.h>
using namespace std;

bool compare (string a, string b) {
return a<b;
}
bool compare2 (string a, string b) {
return a>b;
}

int main() {
    int N; cin>>N;
    vector<string> names;
    vector<string> increase;
    vector<string> decrease;
    for (long i = 0; i < N; i++) {
        string s; cin>>s;
        names.push_back(s); increase.push_back(s); decrease.push_back(s);
    }
    stable_sort(increase.begin(), increase.end(), compare);
    stable_sort(decrease.begin(), decrease.end(), compare2);
    if (names==increase) cout<<"INCREASING";
    else if (names==decrease) cout<<"DECREASING";
    else cout<<"NEITHER";
}
