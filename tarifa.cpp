#include <iostream>
using namespace std;

int main() {
    int x; cin>>x;
    int n; cin>>n;
    int total = 0;
    for (long i = 0; i < n; i ++) {
        int a; cin>>a;
        total+=a;
    }
    cout<<((n+1)*x)-total<<endl;
    return 0;
}
