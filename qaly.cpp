#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    double num[n][2];
    for (long i = 0; i < n; i += 1) {
        for (long j = 0; j < 2; j += 1) {
            cin>>num[i][j];
        }
    }
    double total;
    for (long i = 0; i < n; i += 1) {
        total += (num[i][0]*num[i][1]);
    }
    cout<<setprecision(10)<<total<<endl;
    system("pause");
    return 0;
}
