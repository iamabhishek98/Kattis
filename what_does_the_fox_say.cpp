#include <bits/stdc++.h>
using namespace std;
//important to tokenize string using spaces
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

int main() {
    int n; cin>>n;
    cin.ignore();
    while (n--) {
        string str;
        getline(cin,str);
        vector<string> fox = split(str, " ");

        string a,b,sound;
        vector<string> sounds;
        while (cin>>a) {
            if (a == "what") {
                string temp;
                getline(cin,temp);
                break;
            }
            cin>>b>>sound;
            sounds.push_back(sound);
        }
        int pos = 0;
        while (pos<fox.size()) {
            bool status = false;
            for (long i = 0; i < sounds.size() && !status; i++) {
                if (sounds[i] == fox[pos]) {
                    status = true;
                }
            }
            if (status) {
                fox.erase(fox.begin()+pos); pos = 0;
            }
            else pos++;
        }
        for (long i = 0; i < fox.size(); i++) {
            cout<<fox[i]<<" ";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}
