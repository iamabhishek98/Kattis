#include <bits/stdc++.h>
using namespace std;

int sod(int n) {
    if (n==0) return 0;
    return ((n%10)+sod(n/10));
}

int main() {
    int n;
    while (cin>>n) {
        if (n==0) break;
        int x = 11;
        while (sod(x*n) != sod(n)) x++;
        cout<<x<<endl;
    }
    return 0;
}
