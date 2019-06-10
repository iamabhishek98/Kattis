#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][3];
    for (long i = 0; i < n; i += 1) {
        for (long j = 0; j < 3; j += 1) {
            cin>>arr[i][j];
        }
    }
    for (long i = 0; i < n; i += 1) {
        int total = arr[i][1] - arr[i][0];
        if (total > arr[i][2]) {
            cout<<"advertise"<<endl;
        }
        else if (total == arr[i][2]) {
            cout<<"does not matter"<<endl;
        }
        else {
            cout<<"do not advertise"<<endl;
        }
    }
    return 0;
}
