#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d; cin>>n>>d;
    bool status = false;
    int max = 0;
    for (long i = 0; i < n; i++) {
        int x; cin>>x;
        if (x<=d && !status) {
            status = true; max=i;
        }
    }
    if (status) cout<<"It hadn't snowed this early in "<<max<<" years!";
    else cout<<"It had never snowed this early!";
    return 0;
}
