#include <bits/stdc++.h>
using namespace std;

struct str {
string proj;
map<string,long> names;
vector<string> name;
};

bool compare (str &a, str &b) {
if (a.name.size() == b.name.size()) return a.proj<b.proj;
return a.name.size()>b.name.size();
}

int main() {
    //freopen("opensource.txt", "r", stdin);
    string s;
    vector<string> input;
    while (getline(cin,s)) {
        if (s!="1") {
            input.push_back(s);
        }
        if (s=="1") {
            vector<str> output;
            str data;
            data.proj = input[0];
            long i = 1;
            while (i<input.size()) {
                if (input[i][0] == tolower(input[i][0])) {
                    data.names[input[i]]++;
                }
                else if (input[i][0]==toupper(input[i][0])) {
                    output.push_back(data);
                    data.proj = input[i];
                    data.names.clear();
                }
                if (i == input.size()-1) {
                    output.push_back(data);
                }
                i++;
            }
            for (long i = 0; i < output.size(); i++) {
                for (long j = 0; j < output.size(); j++) {
                    if (i==j) continue;
                    for (auto &k : output[i].names) {
                        for (auto &l : output[j].names) {
                            if (k.first == l.first) {
                                k.second = -1; l.second = -1;
                            }
                        }
                    }
                }
            }
            for (long i = 0; i < output.size(); i++) {
                for (auto &k : output[i].names) {
                    if (k.second>=0) output[i].name.push_back(k.first);
                }
            }
            sort(output.begin(), output.end(), compare);
            for (long i = 0; i < output.size(); i++) {
                cout<<output[i].proj<<" "<<output[i].name.size()<<endl;
            }
            input.clear();
        }
        if (s=="0") break;
    }
}
