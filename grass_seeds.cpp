#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double cost;
    int n;
    cin>>cost>>n;
    double total = 0;
    for (long i = 0; i < n; i++) {
        double x,y; cin>>x>>y;
        total += x*y*cost;
    }
    cout<<setprecision(10)<<total<<endl;
    system("pause");
    return 0;
}
