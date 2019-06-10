#include <bits/stdc++.h>
using namespace std;

int main() {
    int max,n; cin>>max>>n;
    int denied = 0; int total = 0;
    for (long i = 0; i < n; i++) {
        string s; int x; cin>>s>>x;
        if (s == "enter") {
            if ((total+x)>max) denied ++;
            else total+=x;
        }
        else {
            total-=x;
        }
    }
    cout<<denied;
}
