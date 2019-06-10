#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    for (long i = 0; i < n; i++) {
        string s; cin>>s;
        int len = sqrt(s.size());
        char sqr[len][len];
        int count = 0;
        for (long j = 0; j < len; j++) {
            for (long k = 0; k < len; k++) {
                sqr[j][k] = s[count];
                count++;
            }
        }
        for (long j = 0; j < len; j++) {
            for (long k = len-1; k >= 0; k--) {
                cout<<sqr[len-1-k][len-1-j];
            }
        }
        cout<<endl;
    }
}
