//2,3,5,9,17,33
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int start = 2;
    for (long i = 0; i < n; i += 1) {
        start = start*2 - 1;
    }
    cout<<start*start;
    return 0;
}
