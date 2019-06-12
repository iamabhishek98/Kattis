#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

struct times {
int arrive;
int stay;
};

bool compare (times &a, times &b) {
    return a.arrive<b.arrive;
}

int main() {
    int n,m; cin>>n>>m;
    vector<times> schedule(n);
    for (long i = 0; i < n; i++) {
        cin>>schedule[i].arrive>>schedule[i].stay;
    }
    sort (schedule.begin(),schedule.end(),compare);
    priority_queue<int,vector<int>,greater<int>> workstations;
    workstations.push(schedule[0].arrive+schedule[0].stay);
    int i = 1;
    int unlocks = 0;
    while (i<n) {
        while ((workstations.top()+m) < schedule[i].arrive && workstations.size()>0) workstations.pop();
        if (workstations.top()>(schedule[i].arrive) || workstations.size()==0) {
            workstations.push(schedule[i].arrive+schedule[i].stay);
            i++;
        }
        else if (workstations.size()>0) {
            workstations.pop();
            workstations.push(schedule[i].arrive+schedule[i].stay);
            unlocks++;
            i++;
        }
    }
    cout<<unlocks<<endl;
}
