#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (long i = 0; i < n; i += 1) {
        long pop, rate, food;
        cin>>pop>>rate>>food;
        int count = 0;
        while (pop<=food) {
            pop *= rate;
            count += 1;
        }
        cout<<count<<endl;
    }
    return 0;
}
