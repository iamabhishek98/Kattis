#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin>>n) {
        if (n == -1) break;
        int temp = 0;
        int total = 0;
        for (long i = 0; i < n; i++) {
            int x,y; cin>>x>>y;
            total += (x*(y-temp));
            temp = y;
        }
        cout<<total<<" miles"<<endl;
    }
}
