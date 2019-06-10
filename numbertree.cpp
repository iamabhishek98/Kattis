#include <bits/stdc++.h>
using namespace std;

int main() {
    long height; cin>>height;
    string dir; cin>>dir;
    long pos = 1;
    for (long i = 0; i < dir.size();i++) {
        pos*=2; if (dir[i]=='R') pos++;
    }
    long x = pow(2,height+1);
    cout<<x-pos;
}
