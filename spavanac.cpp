#include <iostream>
using namespace std;

int main() {
    int h,m;
    cin>>h>>m;
    bool min = false;
    if (m>=45) {
        min = true; //min true means just minus 45
    }
    if (min == false) {
        if (h==0) {
            cout<<23<<" "<<m+15<<endl;
        }
        else {
            cout<<h-1<<" "<<m+15<<endl;
        }
    }
    else {
        cout<<h<<" "<<m-45<<endl;
    }

    return 0;
}
