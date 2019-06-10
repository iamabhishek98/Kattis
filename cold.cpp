#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int n;cin>>n;
    for (long i = 0; i < n; i++) {
        int x;cin>>x;if (x<0) count++;
    }
    cout<<count;
    return 0;
}
