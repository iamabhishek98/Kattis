#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t,q;cin>>t>>q;
    vector<int> tasks;
    vector<int> intervals;
    for (long i = 0; i < t;i++) {
        int x; cin>>x;tasks.push_back(x);
    }
    for (long j = 0; j < q; j++) {
        int x;cin>>x;intervals.push_back(x);
    }
    sort(tasks.begin(),tasks.end());
    sort(intervals.begin(),intervals.end());
    int i = 0; int j = 0;
    int remove = 0;
    while (i < tasks.size() && j < intervals.size()) {
        if (tasks[i] <= intervals[j]) {
            tasks.erase(tasks.begin() + i);
            intervals.erase(intervals.begin() + j);
            remove++;
            i = 0;
        }
        else j++;
    }
    cout<<remove;
}
