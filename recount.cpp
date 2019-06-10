#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    string s; vector<string> names;
    while (getline(cin,s)) {
        if (s=="***") break;
        names.push_back(s);
    }
    sort(names.begin(),names.end());
    int names_count[names.size()];
    for (long i = 0; i < names.size(); i++) names_count[i] = 0;
    int i = 1; int count = 1;
    while (i < names.size()) {
        if (names[i]==names[i-1]) {
            count++;
        }
        else {
            names_count[i-1]+=count;
            count = 1;
        }
        if (i == names.size()-1) {
            names_count[i] += count;
        }
        i++;
    }
    int max = 0; string max_name;
    for (long i = 0; i < names.size(); i++) {
        if (names_count[i]>max) {
            max_name = names[i]; max = names_count[i];
        }
    }
    bool runoff = false;
    for (long i = 0; i < names.size() && !runoff; i++) {
        if (max == names_count[i] && max_name!=names[i]) runoff = true;
    }
    if (runoff) cout<<"Runoff!";
    else cout<<max_name;
}
*/

struct n {
string name;
int num;
};

bool compare (n &a, n &b) {
return a.num>b.num;
}

int main() {
    string s;
    map<string,int> names;
    while (getline(cin,s)) {
        if (s=="***") break;
        names[s]++;
    }
    vector<n> output;
    for (auto i : names) {
        n x; x.name = i.first;
        x.num = i.second;
        output.push_back(x);
    }
    sort(output.begin(),output.end(),compare);
    if (output[0].num == output[1].num) cout<<"Runoff!";
    else cout<<output[0].name;
}
