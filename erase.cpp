#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n; string a,b; cin>>a>>b;
    while (n--) {
        for (long i = 0; i < a.size();i++) {
            if (a[i] == '1') a[i] = '0';
            else a[i] = '1';
        }
    }
    bool status = false;
    for (long i = 0; i < a.size() && !status;i++) {
        if (a[i]!=b[i]) status = true;
    }
    if (!status) cout<<"Deletion succeeded";
    else cout<<"Deletion failed";
}
