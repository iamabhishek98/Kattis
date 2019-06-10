#include <iostream>
using namespace std;

int main() {
    int arr[365];
    for (long i = 0; i< 365; i++) {
        arr[i] = 0;
    }
    int n; cin>>n;
    for (long i = 0; i < n; i++) {
        int x,y; cin>>x>>y;
    for (long j = x-1; j < y; j++) {
        arr[j] = 1;
    }
    }
    int total = 0;
    for (long i = 0; i < 365; i++) {
        if (arr[i] == 1) total++;
    }
    cout<<total;
}
