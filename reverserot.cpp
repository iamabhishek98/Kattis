#include <bits/stdc++.h>
using namespace std;

int main() {
    string t = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";//28
    int x;
    while (cin>>x) {
        if (x==0) break;
        string s; cin>>s;
        reverse(s.begin(),s.end());
        for (long i = 0; i < s.size(); i++) {
            for (long j = 0; j < t.size(); j++) {
                if (s[i] == t[j]) {
                    int temp = j;
                    temp+=x;
                    if (temp>=28) temp-=28;
                    cout<<t[temp];
                }
            }
        }
        cout<<endl;
    }
}
