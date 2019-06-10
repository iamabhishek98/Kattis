#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int count = 0;
    for (long i = 0; i < n; i++) {
        string s; cin>>s;
        for (long i =0; i < s.size(); i++) {
            if (s[i] == 'C' && i<s.size()-1 && s[i+1] == 'D') {
                count++; break;
            }
        }
    }
    cout<<n-count<<endl;
}
