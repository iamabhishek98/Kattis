#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (long i = 0; i < n; i += 1) {
        int x;
        cin>>x;
        if (x%2 == 0) {
            cout<<x<<" is even"<<endl;
        }
        else {
            cout<<x<<" is odd"<<endl;
        }
    }
    system("pause");
    return 0;
}

