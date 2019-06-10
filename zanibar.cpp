#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while (n--) {
        int a,b,total;
        cin>>a; total = 0;
        while (cin>>b && b!=0) {
            if (b>2*a) {
            total += (b-2*a);
            }
            a = b;
        }
        cout<<total<<endl;
    }
    return 0;
}
