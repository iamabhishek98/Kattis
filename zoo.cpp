#include <bits/stdc++.h>
using namespace std;

vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

struct out {
string name;
int freq;
};

int main() {
    int n;
    int count = 0;
    while (cin>>n) {
        count ++;
        if (n==0) break;
        vector<string> input;
        vector<out> output;
        for (long h = 0; h <= n; h++) {
            string s; getline(cin,s);
            vector<string> temp = split(s," ");
            string x = temp.back();
            for (long i = 0; i < x.size(); i++) {
                x[i] = tolower(x[i]);
            }
            input.push_back(x);
        }
        sort (input.begin(), input.end());
        cout<<"List "<<count<<":"<<endl;
        bool status = true;
        int c = 0;
        int total = 1;
        while (c<input.size()) {
            if (input[c] == input[c+1] && c<input.size()-1) {
                total++;
            }
            else if (c!=0) {
            cout<<input[c]<<" | "<<total<<endl;
            total = 1;
            }
            c++;
        }
    }
    system("pause");
    return 0;
}
