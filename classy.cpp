#include <bits/stdc++.h>
using namespace std;

struct names {
string name;
stack<int> ranks;
};

bool compare (names &a, names &b) {
    stack<int> x = a.ranks;
    stack<int> y = b.ranks;
    while (x.size()>0 || y.size()>0) {
        if (x.size()>0 && y.size()>0) {
            if (x.top() == y.top()) {
                x.pop(); y.pop();
            }
            else {
                return x.top() > y.top();
            }
        }
        else if (x.size()>0 && y.size()==0) {
            if (x.top() == 2) {
                x.pop();
            }
            else {
                return x.top() > 2;
            }
        }
        else if (y.size()>0 && x.size()==0) {
            if (y.top() == 2) {
                y.pop();
            }
            else {
                return y.top() < 2;
            }
        }
    }
    if (x.size()==0 || y.size()==0) {
    int count = 0;
    while (count<a.name.size() && count<b.name.size()) {
     if (a.name[count]==b.name[count]) {
        count++; continue;
     }
     else return a.name[count]<b.name[count];
    }
    return a.name<b.name;
    }
}

int main() {
    int o; cin>>o;
    cin.ignore();
    for (long u = 0; u < o; u ++) {
        int n; cin>>n;
        vector<names> input;
        for (long i = 0; i < n; i++) {
           string nam, ran, temp2; cin>>nam>>ran>>temp2;
           vector<int> pos;
           for (long j = 0; j < ran.size(); j++) {
            if (ran[j] == '-') pos.push_back(j+1);
           }
           names c;
           nam.pop_back();
           c.name = nam;
           if (ran[0] == 'u') c.ranks.push(3);
            if (ran[0] == 'm') c.ranks.push(2);
            else if (ran[0] == 'l') c.ranks.push(1);

           for (long j = 0; j < pos.size(); j++) {
            if (ran[pos[j]] == 'u') c.ranks.push(3);
            else if (ran[pos[j]] == 'm') c.ranks.push(2);
            else if (ran[pos[j]] == 'l') c.ranks.push(1);
           }
           input.push_back(c);
        }

        sort(input.begin(), input.end(), compare);

        for (long i = 0; i < input.size(); i++) {
            cout<<input[i].name<<endl;
        }
        cout<<"=============================="<<endl;
    }
    system("pause");
    return 0;
}
