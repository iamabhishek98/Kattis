#include <bits/stdc++.h>
using namespace std;

int main() {
    char x; cin>>x;
    string s; cin>>s;
    if (x == 'E') {
    if (s.size()==1) cout<<s<<1;
    else {
    int i = 1;int count = 1;
    while (i<s.size()) {

        if (s[i] == s[i-1]) count++;
        else {
            cout<<s[i-1]<<count;
            count = 1;
        }
        if (i==s.size()-1 && count>=1) {
            cout<<s[i]<<count;
        }
        i++;
    }
    }
    }
    else if (x == 'D') {
        for (long i = 0; i < s.size();i+=2) {
            for (long j = 0; j < s[i+1]-'0'; j++) {
            cout<<s[i];
            }
        }
    }
}
