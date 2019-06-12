#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin>>n;
    //vector<long long> guests;
    //vector<vector<long long>> guests;
    map<long long, vector<long long>> guests;
    priority_queue<long long,vector<long long>,greater<long long>> min_dist;
    for (long i = 0; i < n; i++) {
        long long x; cin>>x;
        guests[x].push_back(i);

        /*for (long j = 0; j < guests.size();j++) {
            if (x == guests[j]) {
                min_dist.push(i-j);
                break;
            }
        }*/
        //guests.push_back(x);
    }
    /*if (min_dist.size() == 0) cout<<n;
    else cout<<min_dist.top();*/
    for (auto i: guests) {
        if (i.second.size()>1) {
        int min = 1e9;
        for (long a = 1; a < i.second.size(); a++) {
            //for (long b = 0; b < i.second.size();b++) {
            if (abs(i.second[a-1]-i.second[a]) < min) min = abs(i.second[a-1]-i.second[a]);
            //}
        }
        min_dist.push(min);
        }
    }
    if (min_dist.size() == 0) cout<<n;
    else cout<<min_dist.top()<<endl;

}
