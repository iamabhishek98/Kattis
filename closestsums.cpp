#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; int count = 1;
    while (cin>>n) {
        vector<long> nums;
        for (long i = 0; i < n; i++) {
            long x; cin>>x; nums.push_back(x);
        }
        long m; cin>>m;
        cout<<"Case "<<count<<":"<<endl;
        for (long i = 0; i < m; i++) {
            long x; cin>>x; long min_sum = 1e9; long min_diff = 1e9;
            for (long j = 0; j < n; j++) {
                for (long k = 0; k < n; k++) {
                    if (j==k) continue;
                    if (abs(x-(nums[j]+nums[k])) < min_diff) {
                        min_diff = abs(x-(nums[j]+nums[k]));
                        min_sum = (nums[j]+nums[k]);
                    }
                }
            }
            cout<<"Closest sum to "<<x<<" is "<<min_sum<<"."<<endl;
        }
    count++;
    }
}
