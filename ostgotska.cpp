#include <bits/stdc++.h>
using namespace std;

vector<string> f(string s) {
    stringstream name(s); //create a new buffer
    string token; //read from the new buffer
    vector<string> stuff;
    while (name>>token) {
        stuff.push_back(token);
    }
    return stuff;
}

int main() {
    string s; getline(cin,s);
    vector<string> input = f(s);
    int count = 0;
    for (long j = 0; j < input.size();j++) {
    int i = 0;
    while (i+1<input[j].size()) {
        string str = input[j].substr(i,2);
        string temp = "ae";
        if (str[0] == temp[0] && str[1] == temp[1]) {
            count++;
            break;
        }
        i++;
    }
    }
    if (count/(double)input.size() >= 0.4) cout<<"dae ae ju traeligt va";
    else cout<<"haer talar vi rikssvenska";
    return 0;
}
