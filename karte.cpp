#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

int main() {
    int arr[26][13];
    for (long i = 0; i < 26; i++) {
        for (long j = 0; j < 13; j++) {
            arr[i][j] = 0;
        }
    }
    string s;cin>>s;
    long count = 0;
    vector<vector<char>> temp;
    int t = s.size()/3;
    temp.resize(t); int j = 0;
    for (long i = 0; i < t; i++) {
        for (long j = 0; j < 3; j++) {
            temp[i].push_back(s[i*3+j]);
        }
    }
    for (long i = 0; i < temp.size(); i++) {
        int x = temp[i][0] - 65; //alphabet
        int y = (temp[i][1] - '0')*10+(temp[i][2] - '0');
        arr[x][y-1]++;
    }
    bool status = false;
    for (long i = 0; i < 26 && !status; i++) {
        for (long j = 0; j < 13 && !status; j++) {
            if (arr[i][j] == 2) {
                cout<<"GRESKA";
                status = true;
            }
        }
    }
    if (!status) {
        long c = 13;
        for (long j = 0; j < 13; j++) {
            c-=arr['P'-'A'][j];
        }
        cout<<c<<" ";
        c = 13;
        for (long j = 0; j < 13; j++) {
            c-=arr['K'-'A'][j];
        }
        cout<<c<<" ";
        c = 13;
        for (long j = 0; j < 13; j++) {
            c-=arr['H'-'A'][j];
        }
        cout<<c<<" ";
        c = 13;
        for (long j = 0; j < 13; j++) {
            c-=arr['T'-'A'][j];
        }
        cout<<c<<" ";

    }
    return 0;
}
