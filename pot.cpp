#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n; cin>>n;
    int total = 0;
    for (long i = 0; i < n; i++) {
        int x; cin>>x;
        total += pow(x/10,x%10);
    }
    cout<<total;
}
