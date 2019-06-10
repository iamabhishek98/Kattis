#include <iostream>
using namespace std;

int main() {
    int a,b,c; cin>>a>>b>>c;
    int count  = 0;
    while ((c-a != 2 || a-c!=2) && a!=b && b!=c && a!=c) {
        if ((c-b) > (b-a)) {
            a=b+1;
            swap(a,b);
        }
        else {
            c=b-1;
            swap(b,c);
        }
        count ++;
    }
    cout<<count-1;
    return 0;
}
