#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    double total = 0; int count = 0;
    for (long i = 0; i < n; i++) {
        int x; cin>>x;
        if (x!=-1) {
            total+=x;
        }
        else count++;
    }
    cout<<fixed;
    cout.precision(15);
    cout<<total/(double)(n-count);
    return 0;
}
