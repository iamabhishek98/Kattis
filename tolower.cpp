#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    int count = 0;
    for (long i = 0; i < x;i++) {
        bool status = false;
        for (long j = 0; j < y; j++) {
            string a; cin>>a; bool s = true;
            for (long k = 1; k < a.size() && s;k++) {
                int b = a[k];
                if (b<=90) s = false;
            }
            if (!s) status = true;
        }
        if (!status) count++;
    }
    cout<<count;
}
