#include <bits/stdc++.h>
using namespace std;

struct tree {
    string s;
    double x;
};

bool compare(tree &a, tree &b) {
    //if (a.x==b.x) return a.s<b.s;
    return a.s<b.s;
}

int main() {
    freopen("joseph.txt", "r", stdin);
    string s;
    int total = 0;
    map<string,int> trees;
    while (getline(cin,s)) {
        total++;
        trees[s]++;
    }
    map<string,double> output;
    //vector<tree> output;
    for (auto i: trees) {
      output[i.first] = (i.second/(double)total)*100;
      //  output.push_back(y);
    }
    for (auto i : output) {
        cout<<i.first<<" "<<fixed<<setprecision(10)<<i.second<<endl;
    }
}
