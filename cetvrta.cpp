#include <iostream>
using namespace std;

int main() {
    int arr[3][2];
    for (long i = 0; i < 3; i += 1) {
        for (long j = 0; j < 2; j += 1) {
            cin>>arr[i][j];
        }
    }
    int equal = 0;
    int y_i = 0;
    int y_j = 0;
    for (long i = 0; i < 3; i += 1) {
        for (long j = 0; j < 2; j += 1) {
            if (arr[i][0] == arr[j][0]) {
                equal = arr[i][0];
                y_i = arr[i][1];
                y_j = arr[j][1];
                break;
            }
        }
    }
    for (long i = 0; i < 3; i += 1) {
         if (arr[i][0] != equal) {
                cout<<arr[i][0]<<" ";
                if (arr[i][1] == y_i)
                    cout<<y_j;
                else
                    cout<<y_i;
                break;
         }
         else if (arr[i][0] == equal && i == 2) {
                    cout<<arr[i][0]<<" ";
                if (arr[i][1] == y_i)
                    cout<<y_j;
                else
                    cout<<y_i;
                break;
         }
    }
    return 0;
}
