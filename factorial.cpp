#include <iostream>
using namespace std;

int factorial(int n) {
    if (n==0) {
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (long i = 0; i < n; i += 1) {
        cin>>arr[i];
    }
    for (long i = 0; i < n; i+= 1) {
        cout<<(factorial(arr[i]))%10<<endl;
    }

    return 0;
}
