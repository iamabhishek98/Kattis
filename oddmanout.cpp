#include <iostream>
#include <vector>
using namespace std;

int main() {
    int u;
    cin>>u;
    for (long e = 0; e < u; e += 1) {
        int n;
        cin>>n;
        vector<long> num;
        for (long i = 0; i < n; i += 1) {
            long x; cin>>x;
            num.push_back(x);
        }

            for (long i = 0; i < num.size(); i += 1) {
                for (long j = 0; j < num.size(); j += 1) {
                    if ((num[i] == num[j]) && (i != j)) {
                        num[i] = -1;
                        num[j] = -1;
                    }
                }


        }
        for (long i = 0; i < num.size(); i += 1) {
            if (num[i] != -1) {
                cout<<"Case #"<<e+1<<": "<<num[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
