#include <iostream>
using namespace std;

int main() {
    int r,x; cin>>r>>x;
    int rooms[r+1];
    rooms[0] = 1;
    for (long i = 1; i < r+1; i++) rooms[i] = 0;
    for (long i = 0; i < x; i++) {
        int y; cin>>y;
        rooms[y] = 1;
    }
    bool status = false;
    for (long i = 1; i < r+1 && !status; i++) {
        if (rooms[i] == 0) {
            cout<<i;
            status = true;
        }
    }
    if (!status) cout<<"too late";
    return 0;
}
