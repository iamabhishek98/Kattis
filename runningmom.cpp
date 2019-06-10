#include <bits/stdc++.h>
using namespace std;

unordered_map<string,vector<string>> cities;
unordered_map<string,int> visited;
bool back_edge_exist;


void dfs(string u) {
    visited[u] = 1; //explored but not fully explored
    for (auto &v:cities[u]) {
        if (visited.find(v) == visited.end()) {
            dfs(v);
        }
        else if (visited[v] == 1) back_edge_exist = true;
    }
    visited[u] = 2;
}

int main() {

    int n; cin>>n; cin.get();
    for (long i = 0; i < n; i++) {
        string a,b; cin>>a>>b; cin.get();
        cities[a].push_back(b);
        visited[a] = visited[b] = 0;
    }
    while(1) {
        string s; cin>>s; cin.get();
        if (cin.eof()) break;
        back_edge_exist = false;
        visited.clear();
        dfs(s);
        cout<<s<<(back_edge_exist ? " safe" : " trapped")<<endl;
    }
}
