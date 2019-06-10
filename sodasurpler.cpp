#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,z; cin>>x>>y>>z;
    int total = 0;
    int start = x+y;
    while (start>=z) {
        total += (start/z);
        start = (start%z)+(start/z);
    }
    cout<<total;
}


