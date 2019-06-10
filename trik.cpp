#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void call_A(int *A, int *B) {
    if (*A == 0 && *B == 1) {
        *A = 1;
        *B = 0;
    }
    else if (*B == 0 && *A == 1) {
        *B = 1;
        *A = 0;
    }
}
void call_B(int *B, int *C) {
    if (*B == 0 && *C == 1) {
        *B = 1;
        *C = 0;
    }
    else if (*C == 0 && *B == 1) {
        *C = 1;
        *B = 0;
    }
}
void call_C(int *A, int *C) {
    if (*A == 0 && *C == 1) {
        *A = 1;
        *C = 0;
    }
    else if (*C == 0 && *A == 1) {
        *C = 1;
        *A = 0;
    }
}

int main() {
    int A=1,B=0,C=0;
    string str;
    cin>>str;
    for (long i = 0; i < str.length(); i += 1) {
        if (str[i] == 'A') {
            call_A(&A,&B);
        }
        else if (str[i] == 'B') {
            call_B(&B,&C);
        }
        else {
            call_C(&A,&C);
        }
    }
    if (A==1)
    cout<<1<<endl;
    else if (B==1)
    cout<<2<<endl;
    else
        cout<<3<<endl;
    return 0;
}
