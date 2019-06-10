#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c; cin>>r>>c;
    double a_p = M_PI*r*r;
    double c_p = M_PI*(r-c)*(r-c);
    cout<<fixed<<setprecision(15)<<(c_p)/a_p*100;
}
