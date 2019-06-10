#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t; cin>>n>>t;
    vector<int> bank(t+1,0);
    for (long i = 0; i < n; i++) {
        int mon,time; cin>>mon>>time;
        for (long i = time; i >=0 ;i--) {
            if (mon>bank[i]) {
                swap(bank[i], mon);
            }
        }
    }
    int ans = 0;
    for (long i = 0; i < bank.size(); i++) {
        ans+=bank[i];
    }
    cout<<ans;
}
