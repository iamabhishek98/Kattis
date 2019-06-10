#include <bits/stdc++.h>
using namespace std;

bool compare (string a, string b) {
if (a[0]==b[0]) {
    return a[1]<b[1];
}
return a[0]<b[0];
}

int main() {
    int N;
    while (cin>>N) {
        vector<string> names;
        for (long i = 0; i < N; i++) {
            string s; cin>>s;
            names.push_back(s);
        }
        stable_sort(names.begin(),names.end(),compare);
        for (long i = 0; i < names.size(); i++) {
            cout<<names[i]<<endl;
        }
        cout<<endl;
    }
}

/*
struct comparator {
bool operator () (string &a, string &b) {
if (a[0]==b[0]) {
    return a[1]<b[1];
}
return a[0]<b[0];
}
};

int main() {
    int n; map<string,int> names;
    while (cin>>n) {
    if (n==0) break;
    for (long i = 0; i < n; i++) {
        string s; cin>>s;
        names[s]++;
    }
    for (auto i : names) cout<<i.first<<endl;
    cout<<endl;
    }
}
*/
