#include <iostream>
using namespace std;

int main() {
    int statues;
    cin>>statues;
    int printer = 1;
    int days = 0;
    if (statues == 0 || statues == 1)
        cout<<statues<<endl;
    else {
        while (printer < statues) {
            days += 1;
            printer *= 2;
        }
    cout<<days+1<<endl;
    }
    return 0;
}
