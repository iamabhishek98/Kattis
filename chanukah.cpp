#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if (n==0) return 0;
    return n + sum(n-1);
}

int main() {
    int N; cin>>N;
    while (N--) {
        int x, y; cin>>x>>y;
        cout<<x<<" "<<sum(y)+y<<endl;
    }
}
