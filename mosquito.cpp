#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin>>x) {
        int m, p, l, e, r, s, n;
        m = x;
        cin>>p>>l>>e>>r>>s>>n;
        for (long i = 0; i < n; i += 1) {
            int temp = m;
            m = p/s;
            p = l/r;
            l = temp*e;
        }
        cout<<m<<endl;
    }
    return 0;
}
