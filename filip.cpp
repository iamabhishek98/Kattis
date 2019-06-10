#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1,n2;
    cin>>n1>>n2;
    int rev_n1 = 0;
    int rev_n2 = 0;
    int n = 3;
    while(n1!=0) {
        rev_n1 = (rev_n1*10) + n1%10;
        n1 /= 10;
        rev_n2 = (rev_n2*10) + n2%10;
        n2 /= 10;
        n -= 1;
    }
    if (rev_n1>rev_n2)
        cout<<rev_n1;
    else
        cout<<rev_n2;
    system("pause");
    return 0;
}
