#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    int N; cin>>N;
    while (N--) {
    int n; cin>>n;
    vector<string> cities;
    int total = 1;
    for (long I = 0; I < n; I ++) {
        string s; cin>>s;
        if (cities.size() == 0) cities.push_back(s);
        else  {
        bool status = false;
        for (long i = 0; i < cities.size() && !status; i++) {
            if (s == cities[i]) status = true;
        }
        if (!status) {
            total++;
            cities.push_back(s);
        }
        }
    }
    cout<<total<<endl;
    }
    return 0;
}
*/
int main() {
    int N; cin>>N;
    while (N--) {
        int n; cin>>n;
        map<string,int> cities;
        for (long i = 0; i < n; i++) {
            string s; cin>>s;
            cities[s]++;
        }
        cout<<cities.size()<<endl;
    }
}
