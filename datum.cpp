#include <iostream>
#include <vector>
using namespace std;
//1 is thursday
//7 is wednesday
int main() {
    int a,b; cin>>a>>b;
    int arr[13] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int days = 0;
    for (long i = 0; i < b; i++) {
        days += arr[i];
    }
    days -= (arr[b-1]-a+1);
    days%=7;
    if (days==0) cout<<"Thursday";
    else if (days==1) cout<<"Friday";
    else if (days==2) cout<<"Saturday";
    else if (days==3) cout<<"Sunday";
    else if (days==4) cout<<"Monday";
    else if (days==5) cout<<"Tuesday";
    else if (days==6) cout<<"Wednesday";

    return 0;
}
