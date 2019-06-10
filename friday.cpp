#include <iostream>
#include <vector>
using namespace std;
//starts with sunday so %7 and if 6 then friday
int main() {
    int n; cin>>n;
    for (long i = 0; i < n; i ++) {
        int days,months; cin>>days>>months;
        vector<int> time;
        for (long i = 0; i < months; i ++) {
            int x; cin>>x;
            time.push_back(x);
        }
        int fridays = 0;
        long day = 0;
        int curr_day = 7; //starts with sunday
        for (long k = 0; k < months; k++) {
            for (long j = 1; j <= time[k]; j++) {
                if (j==13) {
                    if (curr_day == 5) {
                        fridays++;
                    }
                }
                curr_day++;
                if (curr_day>7) curr_day = 1;
            }
        }
        cout<<fridays<<endl;
    }
}

