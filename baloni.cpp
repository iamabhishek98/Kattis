#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    int n; cin>>n; deque<int> balloons;
    for (long i = 0; i < n; i++) {
        int x; cin>>x;
        balloons.push_back(x);
    }
    int arrows = 0;
    while (balloons.size()!=0) {
        arrows++;
        int start = balloons.front();
        int i = 1;
        while (i<balloons.size()) {
            if (balloons[i] == start-1) {
                start--;
                balloons.erase(balloons.begin()+i);
            }
            else i++;
        }
        balloons.pop_front();
    }
    cout<<arrows;
}
*/

int main() {
    int n; cin>>n; vector<int> balloons(1000001);
    for (long i = 0; i < n; i++) {
        int x; cin>>x;
        if (balloons[x]==0) {
            balloons[x-1]++;
        }
        else {
            balloons[x]--;
            balloons[x-1]++;
        }
    }
    int arrows = 0;
    for (long i = 0; i < balloons.size(); i++) {
        //if (balloons[i]>0) cout<<i<<" "<<balloons[i]<<endl;
        arrows+=balloons[i];
    }
    cout<<arrows;
}
