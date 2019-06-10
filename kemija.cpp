#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin,s);
    int count = 0;
    for (long i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e'
            || s[i] == 'o' || s[i] == 'u') {
            i+=2;
        }
        cout<<s[i];
    }
}
