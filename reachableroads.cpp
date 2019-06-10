#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> cities;
vector<bool> visited;

void dfs(int n) {
    visited[n] = true;
    for (auto &i:cities[n]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int n; cin>>n;
    while (n--) {
        int m; cin>>m;
        cities.assign(m,vector<int>());
        visited.assign(m,false);
        int r; cin>>r;
        for (long i = 0; i < r; i++) {
            int a,b;
            cin>>a>>b;
            cities[a].push_back(b);
            cities[b].push_back(a);
        }
        int count = 0;
        for (long i = 0; i < m; i++) {
            if (visited[i] == false) {
                count++;
                dfs(i);
            }
        }
        cout<<count-1<<endl;
    }
}

