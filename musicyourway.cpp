#include <bits/stdc++.h>
using namespace std;

int inde;

bool compare(vector<string> a, vector<string> b) {
    return a[inde]<b[inde];
}

vector<string> split(string temp) {
    vector<string> temp2;
    temp2.push_back("");
    for(auto i : temp) {
        if(i == ' ') {
            temp2.push_back("");
        }
        else {
            temp2.back().push_back(i);
        }
    }
    return temp2;
}

int main() {
    string ord; getline(cin,ord);
    vector<string> order = split(ord);
    int n; cin>>n;
    vector<vector<string>> songs;
    for (long i = 0; i < n; i++) {
        vector<string>temp;
        int j = 0;
        while (j < order.size()) {
            string s; cin>>s;
            temp.push_back(s);
            j++;
        }
        songs.push_back(temp);
    }

    int N; cin>>N;
    for (long i = 0; i < N; i++) {
        string s; cin>>s;
        for (long j = 0; j < order.size(); j++) {
            if (s==order[j]) {
                inde = j; break;
            }
        }
        stable_sort(songs.begin(),songs.end(), compare);
        cout<<ord<<endl;
        for (long i = 0; i < songs.size();i++) {
            for (long j = 0; j < songs[i].size(); j++) {
                cout<<songs[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    system("pause");
}
