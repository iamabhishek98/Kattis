#include <bits/stdc++.h>
using namespace std;

struct str {
string first;
string last;
};

bool compare (str &a, str &b) {
    if (a.last==b.last) return a.first<b.first;
    return a.last<b.last;
}

int main() {
    vector<str> names;
    str a;
    while (cin>>a.first>>a.last) {
        names.push_back(a);
    }
    sort(names.begin(),names.end(),compare);
    map<string,int> repeat;
    for (auto i : names) {
        repeat[i.first]++;
    }
    for (long i = 0; i < names.size(); i++) {
        bool exist = false;
        for (auto j : repeat) {
            if (names[i].first == j.first && j.second>1) {
                exist = true; break;
            }
        }
        if (exist) cout<<names[i].first<<" "<<names[i].last<<endl;
        else cout<<names[i].first<<endl;
    }
    return 0;
}
