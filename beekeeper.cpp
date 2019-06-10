#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin>>n) {
        if (n==0) break;
        string max_vowels;
        int max_vow = 0;
        for (long i = 0; i < n; i++) {
            string s; cin>>s;
            int j = 1;
            int count  = 0;
            while (j<s.size()) {
                if (s[j]==s[j-1] && (s[j] == 'a' || s[j] == 'e' || s[j] == 'i'
                    || s[j] == 'o' || s[j] == 'u' || s[j] == 'y')) {
                    count++;
                }
                    j++;
            }
            if (count>=max_vow) {
                max_vow = count;
                max_vowels = s;
            }
        }
        cout<<max_vowels<<endl;
    }
}
