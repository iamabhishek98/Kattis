#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    map<vector<int>,int> frosh;
    for (long i = 0; i < n; i++) {
        vector<int> temp;
        for (long j = 0; j < 5; j++) {
            int x; cin>>x; temp.push_back(x);
        }
        sort(temp.begin(),temp.end());
        frosh[temp]++;
    }
    int max = 0;
    for (auto i : frosh) {
        if (i.second>max) max= i.second;
    }
    int total = 0;
    for (auto i : frosh) {
        if (i.second==max) total+=i.second;
    }
    cout<<total;
    return 0;
}
