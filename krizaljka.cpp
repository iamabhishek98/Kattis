#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b; cin>>a>>b;
    bool status = false; int pos = -1; int p_a = -1;
    for (long i = 0; i < a.size()&&!status;i++) {
        for (long j = 0; j < b.size()&&!status; j++) {
            if (a[i]==b[j]) {
                pos = i; p_a = j; status = true;
            }
        }
    }
    for (long i = 0; i < b.size(); i++) {
        if (i == p_a) cout<<a;
        else {
        for (long j = 0; j < a.size();j++) {
            if (j == pos) cout<<b[i];
            else cout<<'.';
        }
        }
        cout<<endl;
    }
    return 0;
}
