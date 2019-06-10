#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    vector<vector<char>> compare;
    int count = 1;
    compare.resize(80);
    for (long i = 0; i < s.size();i++) {
        if (s[i] == ' ') {
            count++;
        }
        else {
            compare[count].push_back(s[i]);
        }
    }
    bool status = true;
    for (long i = 1; i <= count; i++) {
        for (long j = i+1; j <= count; j++) {
            if (compare[i].size() != compare[j].size()) continue;
            int c = 0;
            for (long k = 0; k < compare[i].size(); k++) {
                if (compare[i][k] == compare[j][k]) c++;
            }
            if (c == compare[i].size()) status = false;
        }
    }
    if (status) cout<<"yes";
    else cout<<"no";
    return 0;
}
