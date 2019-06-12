#include <bits/stdc++.h>
using namespace std;

struct ballot {
    int population;
    int boxes_count;
};

struct compare {
    bool operator ()(ballot &p1, ballot &p2) {
        return ((p1.population/(double)p1.boxes_count)<(p2.population/(double)p2.boxes_count));
    }
};

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int cities, boxes;
    while (cin>>cities>>boxes) {
        if (cities==-1 && boxes==-1) break;
        priority_queue<ballot,vector<ballot>,compare> popu;
        for (long i = 0; i < cities; i++) {
            ballot x; cin>>x.population;
            x.boxes_count = 1;
            popu.push(x);
        }
        boxes-=cities;
        while (boxes>0) {
            ballot temp = popu.top();
            temp.boxes_count++;
            popu.pop();
            popu.push(temp);
            boxes--;
        }
        cout<<ceil(popu.top().population/(double)popu.top().boxes_count)<<endl;
    }
}
