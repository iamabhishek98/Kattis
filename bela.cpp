#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main() {
    int n;
    char ran;
    cin>>n>>ran;
    vector<string> inp(4*n);
    char num[8] = {'A', 'K', 'Q', 'J','T','9','8','7'};
    int dom[8] = {11,4,3,20,10,14,0,0};
    int not_dom[8] = {11,4,3,2,10,0,0,0};
    int score = 0;

    for (long i = 0; i < 4*n; i += 1) {
        vector<string> x(1);
        cin>>x[0];
        if (x[0].back() == ran) {
            for (long j = 0; j < 8; j += 1) {
                if (x[0].front() == num[j]) {
                    score += dom[j];
                    break;
                }
            }
        }
        else {
            for (long j = 0; j < 8; j += 1) {
                if (x[0].front() == num[j]) {
                    score += not_dom[j];
                    break;
                }
            }
        }
    }
    cout<<score<<endl;
    return 0;
}
