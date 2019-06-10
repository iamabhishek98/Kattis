#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y; cin>>x>>y;
    int d1 = 0;
    int d2 = 0;
    if (x>y) {
        d1 = (360-x) + y;
        d2 = y-x;
    }
    else if (x<y) {
        d1 = y-x;
        d2 = -((360-y) + x);
    }
    int output = 0;
    if (abs(d1)>abs(d2)) output = d2;
    else output = d1;
    cout<<output;
    return 0;
}
