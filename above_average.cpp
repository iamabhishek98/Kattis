#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n; cin>>n;
    for (long i = 0; i < n; i ++) {
        int x;cin>>x;
        vector<int> num;
        for (long j = 0; j < x; j ++) {
            int y; cin>>y;
            num.push_back(y);
        }
        long double avg = 0;
        for (long j = 0; j < x; j ++) {
            avg+=num[j];
        }
        avg/=x;
        long double total = 0;
        for (long j = 0; j < x; j ++) {
            if (num[j]>avg) {
                total++;
            }
        }
        cout<<fixed;
        cout.precision(3);
        cout<<(total/(double)x)*100<<"%"<<endl;
        }

    return 0;
}
