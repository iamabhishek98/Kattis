#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double w,h;
    cin>>n>>w>>h;
    double x = sqrt(w*w+h*h);
    for (long i = 0; i < n; i += 1) {
        double value;
        cin>>value;
        if (value<=x) {
            cout<<"DA"<<endl;
        }
        else {
            cout<<"NE"<<endl;
        }
    }
    system("pause");
    return 0;
}
