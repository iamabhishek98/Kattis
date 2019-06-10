#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    unordered_map<string,vector<int>> holidays;
    unordered_set<string> countries;
    for (long i = 0; i < n; i++) {
        string country; cin>>country;
        int year; cin>>year;
        holidays[country].push_back(year);
        countries.insert(country);
    }
    for (auto i : countries) {
        vector<int>&temp = holidays[i];
        sort(temp.begin(),temp.end());
    }
    int N; cin>>N;
    for (long i = 0; i < N; i++) {
        string coun; int num; cin>>coun>>num;
        vector<int>&temp = holidays[coun];
        cout<<temp[num-1]<<endl;
    }
}
