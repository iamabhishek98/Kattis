#include <bits/stdc++.h>
using namespace std;

struct str {
string name;
vector<string> names;
map<string,int> freq;
int total;
};

bool compare (const str &a, const str &b) {
if (a.total==b.total) return a.name<b.name;
return a.total>b.total;
}

int main() {
    int N; cin>>N; vector<str> probs;
    while (N--) {
        str x; int num;
        cin>>x.name>>num;
        for (long i = 0; i < num; i++) {
            string g; cin>>g;
            x.names.push_back(g);
        }
        probs.push_back(x);
    }
    map<string,int> input;
    string s;
    while (cin>>s) {
        input[s]++;
    }
    for (long i = 0; i < probs.size(); i++) {
        int tot = 0;
        for (long j = 0; j < probs[i].names.size(); j++) {
            probs[i].freq[probs[i].names[j]] = input[probs[i].names[j]];
            tot+=input[probs[i].names[j]];
        }
        probs[i].total = tot;
    }
    sort(probs.begin(),probs.end(),compare);
    int i = 0;
    while(probs[i].total == probs[0].total && i < probs.size()) {
        cout<<probs[i].name<<endl;i++;
    }
}
