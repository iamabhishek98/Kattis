#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    if (s.size()==1) cout<<1;
    else {
        bool status = true;
        int k = 1;
        int count = 0;
        while (k < s.size()){
            vector<string> tokens;
            for (long i = 0; i < s.size();i+=k) {
                string token = s.substr(i,k);
                for (long j = 0; j < count; j++) {
                char temp = token[0];
                token.erase(token.begin());
                token.push_back(temp);
                }
                tokens.push_back(token);
                count++;
            }
            bool exist = true;
            for (long i = 0; i < tokens.size() && exist;i++) {
                for (long j = 0; j < tokens.size() && exist;j++) {
                    if (i!=j && tokens[i] != tokens[j]) {
                        exist = false;
                    }
                }
            }
            if (exist) break;
            k++;
        }
        cout<<k;
    }
    return 0;
}
