#include <bits/stdc++.h>
using namespace std;

struct color {
int n;
string col;
};

bool compare (color &a, color &b) {
    return a.n<b.n;
}

int main() {
    int N; cin>>N;
    vector<color> colors;
    while (N--) {
        string a,b; cin>>a>>b;
        int temp = a[0];
        color x;
        if (temp>=48 && temp<=57) {
            x.n = stoi(a)/2;
            x.col = b;
        }
        else {
            x.col = a;
            x.n = stoi(b);
        }
        colors.push_back(x);
    }
    sort(colors.begin(), colors.end(), compare);
    for (long i = 0; i < colors.size(); i++) {
        cout<<colors[i].col<<endl;
    }
}
