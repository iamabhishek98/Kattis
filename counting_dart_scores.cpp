#include <iostream>
using namespace std;

int main() {
    int x;cin>>x;
    int a=0;int b=0;int c=0;
    int a_m=0;int b_m=0;int c_m=0;
    for (long i = 1;i<=20;i++) {
        for (long j = 1;j<=20;j++) {
            for (long k = 1;k<=20;k++) {
                for (long q = 0; q <= 3; q++) {
                    for (long w = 0; w<= 3; w++) {
                        for (long e = 0; e<=3; e++) {
                            if ((q*i+w*j+e*k) == x) {
                                a = i; b= j; c = k;
                                a_m = q; b_m = w; c_m = e;
                            }
                        }
                    }
                }
            }
        }
    }
    if (a_m>0||b_m>0||c_m>0) {
    if (a_m>0) {
        if (a_m == 1) cout<<"single "<<a<<endl;
        else if (a_m == 2) cout<<"double "<<a<<endl;
        else if (a_m == 3) cout<<"triple "<<a<<endl;
    }
    if (b_m>0) {
        if (b_m == 1) cout<<"single "<<b<<endl;
        else if (b_m == 2) cout<<"double "<<b<<endl;
        else if (b_m == 3) cout<<"triple "<<b<<endl;
    }
    if (c_m>0) {
        if (c_m == 1) cout<<"single "<<c<<endl;
        else if (c_m == 2) cout<<"double "<<c<<endl;
        else if (c_m == 3) cout<<"triple "<<c<<endl;
    }
    }
    else cout<<"impossible"<<endl;
    return 0;
}
