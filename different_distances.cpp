#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    double a;
    while (cin>>a && a!=0) {
        double x1,y1,x2, y2,p; cin>>y1>>x2>>y2>>p;
        x1 = a;
        double x = abs(x2-x1); x = pow(x,p);
        double y = abs(y2-y1); y = pow(y,p);
        double z = x+y; z = pow(z, 1.0/p);
        //cout<<x<<y;
        cout<<fixed;
        cout.precision(10);
        cout<<z<<endl;
    }
    return 0;
}
