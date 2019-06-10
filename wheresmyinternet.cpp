#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    map<int,int> houses;
    int n,m; cin>>n>>m;
    for (long i = 0; i < m; i++) {
        int x,y; cin>>x>>y;
        houses[x] = y;
    }
    for (long i = 1; i <= n;i++) {
        if (houses[i]==0) houses[i] = -1;
    }
    if (houses[1]==0 || houses[1]==-1) {
        for (long i = 2; i <= n; i++) cout<<i<<endl;
    }
    else {
        bool status = true;
        vector<int> missing;
      //  map<int,int>::iterator it = houses.find(1);
      map<int,int>::iterator it = houses.begin();
        while (it != houses.end()) {
            if (houses[it] >= 0) {
                *it = -1;
                *it = houses.find(houses[*it]);
            }
            else {
                missing.push_back(it.first);
                it++;
            }
        }
        for (auto &i: houses) {
            if (it.second == -1) cout<<it.first<<endl;
        }
    }
}
*/
vector<vector<int>> houses;
vector<bool> visited;

void dfs(int n) {
    visited[n] = true;
    for (auto &i:houses[n]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}
int main() {
    int n,m; cin>>n>>m;
    houses.assign(n+1,vector<int>());
    visited.assign(n+1,false);

    for (long i = 0; i < m; i++) {
        int a,b;
        cin>>a>>b;
        houses[a].push_back(b);
        houses[b].push_back(a);
    }
    dfs(1);
    //set<int> output;
    bool status = false;
    for (long i = 1; i <= n; i++) {
        if (visited[i] == false) {
            status = true;
            cout<<i<<endl;
        }
    }
    if (!status) cout<<"Connected";
}
