#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    while (N--) {
        string s; cin>>s;
        int i = 0; int sum = 0;
        reverse(s.begin(),s.end());
        while (i<s.size()) {
            int x = s[i] - '0';
            if (i%2==1) {
            x *= 2;
            }
            if (x>=10) {
                x = x/10+x%10;
            }
            sum+=x;
            i++;
        }
        if (sum%10 == 0) cout<<"PASS"<<endl;
        else cout<<"FAIL"<<endl;
    }
}
