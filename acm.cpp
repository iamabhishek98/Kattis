#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int x;
    int count_right;
    vector<char> wrong_prob;
    vector<int> wrong_time;
    vector<char> right_prob;
    int total_time = 0;
    int total_prob = 0;
    while (cin>>x) {
        if (x == -1)
            break;
        int time = x;
        char prob;
        string status;
        cin>>prob>>status;
        if (status == "wrong") {
            wrong_prob.push_back(prob);
            wrong_time.push_back(time);
        }
        else if (status == "right") {
            int n = wrong_prob.size();
            int count = 0;
            int j = right_prob.size();
            int c = 0;
            for (long i = 0; i < j; i += 1) {
                if (prob == right_prob[i])
                    c += 1;
            }
            if (c==0) {
            for (long i = 0; i < n; i += 1) {
                if (prob == wrong_prob[i]) {
                    count += 1;
                }
            }
            total_prob += 1;
            total_time += count*20 + time;
            right_prob.push_back(prob);
            }
        }
    }
    cout<<total_prob<<" "<<total_time;
    return 0;
}
