#include <bits/stdc++.h>
using namespace std;

struct str {
string name;
double fleg;
double oleg;
};

bool compare (str &a, str &b) {
if (a.oleg==b.oleg) return a.fleg<b.fleg;
return a.oleg<b.oleg;
}

int main() {
    int n; cin>>n;
    deque<str> names;
    for (long i = 0; i < n; i++) {
        str x; cin>>x.name>>x.fleg>>x.oleg;
        names.push_back(x);
    }
    deque<str> output; double min_time = 1e9; deque<str> temp;
    for (long i = 0 ; i < n; i++) {
        double total_time = 0; total_time+=names[i].fleg;
        temp = names;
        temp.erase(temp.begin()+i);
        sort(temp.begin(),temp.end(),compare);
        for (long i = 0 ; i < 3; i++) {
            total_time += temp[i].oleg;
        }
        if (total_time<min_time) {
            min_time = total_time;
            deque<str> temp2;
            temp2.push_back(names[i]);
            for (long i = 0; i < 3; i++) {
                temp2.push_back(temp[i]);
            }
            output = temp2;
        }
    }
    cout<<fixed<<setprecision(10)<<min_time<<endl;
    for (long i = 0; i < 4; i++) {
        cout<<output[i].name<<endl;
    }
}
