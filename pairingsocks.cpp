#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    deque<int> input;
    for (long i = 0; i < 2*n; i++) {
        int n; cin>>n; input.push_back(n);
    }
    deque<int> auxillary;
    bool status = true; int steps = 0;
    while (input.size()!=0) {
        steps++;
        if (auxillary.size()!=0) {
        if (auxillary.back()==input.back()) {
            auxillary.pop_back(); input.pop_back();
            continue;
        }
        }
        auxillary.push_back(input.back()); input.pop_back();
    }
    if (auxillary.size()==0) cout<<steps;
    else cout<<"impossible";
}
