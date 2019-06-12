#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct car {
    int pos;
    int time;
    int side; //0 is left and 1 is right
};

bool compare (car &start, car &end) {
    return (start.pos < end.pos);
}

int main() {
    int c; cin>>c;
    for (long w = 0; w < c; w += 1) {
        int n,t,m; cin>>n>>t>>m;
        //n is capacity
        //t is time to go to the other side
        //time is sorted in order the cars come so the first cars are the ones waiting for the longest time
        queue<car> left;
        queue<car> right;
        vector<car> order;
        for (long e = 0; e < m; e += 1) {
            int x;cin>>x; //x is time at which car arrives
            order.push_back(car());
            order[e].pos = e;
            order[e].time = x;;
            string s; cin>>s;
            if (s == "left")
                order[e].side = 0;
            else if (s == "right")
                order[e].side = 1;
        }
        int total = m; //total number of cars
        int time = 0; //increments in minutes
        int travel = 0; //time while travelling
        int side = 0; //starts at left
        bool travelling = false;
        int o_count = 0;
        vector<car> output;
        queue<car> ferry;
        while (output.size() != order.size()) { //while there are still cars
            queue<car> current;
            for (long i = 0;i < order.size(); i += 1) {
                if (order[i].time == time) {
                    car temp = order[i];
                    current.push(temp);
                }
                else if (order[i].time>time) {
                    break;
                }
            }
            //first split up the current
            while (current.size() > 0) {
                car temp;
                temp = current.front();
                if (temp.side == 0) {
                    left.push(temp);
                    car temp2 = left.back();
                }
                else if (temp.side == 1) {
                    right.push(temp);
                }
                current.pop();
            }
            int capacity = 0;
            //check left and right queues first
            if (!travelling && ferry.size() < n) {
                if (side == 0) {
                    while (left.size() > 0 && ferry.size() <n) {
                        car temp = left.front();
                        ferry.push(temp);
                        output.push_back(temp);
                        output[o_count].time = time + t;
                        o_count += 1;
                        total -= 1;
                        capacity += 1;
                        left.pop();
                    }
                }
                else {
                    while (right.size() > 0 && ferry.size() <n) {
                        car temp = right.front();
                        ferry.push(temp);
                        output.push_back(temp);
                        output[o_count].time = time + t;
                        o_count += 1;
                        total -= 1;
                        capacity += 1;
                        right.pop();
                    }
                }
            }
            if ((!travelling && ferry.size()>0) ||
                (side == 0 && right.size() > 0 && !travelling) ||
                (side == 1 && left.size() > 0 && !travelling)) {
                if (side == 0) {
                    side = 1;
                }
                else  {
                    side = 0;
                }
                travelling = true;
                travel = t; //starting ferry
            }
            if (travel > 0) {
                travel -= 1;
            }
            if (travel == 0 && travelling) {
                while (ferry.size()>0) {
                    ferry.pop();
                }
                travelling = false;
            }
            time += 1;
        }
        for(long i = 0; i < output.size(); i += 1) {
            for(long j = i + 1; j < output.size(); j += 1) {
                if (output[j].pos < output[i].pos) {
                swap(output[i].pos, output[j].pos);
                swap(output[i].time, output[j].time);
                swap(output[i].side, output[j].side);
                }
            }
        }
        /*sort(output.begin(), output.end(), compare);*/  //slower method
        for (long i = 0; i < output.size(); i += 1) {
            cout<<output[i].time<<endl;
        }
        cout<<endl;
    }

    cout<<endl;
    system("pause");
    return 0;
}
