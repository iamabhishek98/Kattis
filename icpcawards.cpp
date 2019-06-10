#include <bits/stdc++.h>
using namespace std;

struct str {
string a; string b;
};

int main() {
    int n; cin>>n;
   // map<string,vector<string>> teams;
    set<string> winners;
    vector<str> input;
    for (long i = 0 ; i < n; i++) {
        str x; cin>>x.a>>x.b;
        //string a,b; cin>>a>>b;
        if (i==0) {
            input.push_back(x);
            winners.insert(x.a);
        }
        else if ((winners.find(x.a) == winners.end())) {
        input.push_back(x);
        winners.insert(x.a);
        }
    }
    int count = 0;
    for (auto i: input) {
        cout<<i.a<<" "<<i.b<<endl;
        count++;
        if (count == 12) break;
    }
}
