#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int ori[6] = {1,1,2,2,2,8};
    for (long i = 0; i < 6; i += 1) {
        cin>>arr[i];
    }
    for (long i = 0; i < 6; i += 1) {
        cout<<ori[i]-arr[i]<<" ";
    }
}
