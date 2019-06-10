#include <bits/stdc++.h>
using namespace std;
//0 to 9 48 to 57
//a to z 97 to 122
//A to Z 65 to 90
int main() {
    while (!cin.eof()) {
        string s;
        vector<string> block;
        while (!cin.eof()) {
            getline(cin,s);
            if (s == "") break;
            block.push_back(s);
        }
        int arr[36+27];
        for (long i = 0; i < (36+26); i++) {
            if (i<10) arr[i] = i+48;
            else if (i>=10 && i < 36) arr[i] = i+87;
            else if (i >= 36) arr[i] = i+(65-36);
        }
        int x = 0;
        int y = 0;
        bool stat = false;
        for (long i = 0; i < block.size() && !stat; i++) {
            for (long j = 0; j < block[i].size() && !stat; j++) {
                if (block[i][j] == '0') {
                    x = i; y = j; stat = true;
                }
            }
        }
        bool status =  true;
        int length = block[0].size();
        int height = block.size();
        int curr = 0;
        while (status) {
            if (curr == 36+25) break;
            long count = 0;
            bool found = false;
            if (!found) {
                for (long i = 0; i < length && !found; i++) {
                    int temp = block[x][i];
                    if (temp == arr[curr+1]) {
                        if (i>y) {
                            for (long j = y+1; j < i; j++) {
                                int t = block[x][j];
                                if (t == 46) block[x][j] = '-';
                                else if (t == 124) block[x][j] = '+';
                            }
                        }
                        else if (i<y) {
                            for (long j = i+1; j < y; j++) {
                                int t = block[x][j];
                                if (t == 46) block[x][j] = '-';
                                else if (t == 124) block[x][j] = '+';
                            }
                        }
                        y = i;
                    found = true;
                    }
                }
            }
            if (!found) {
                for (long i = 0; i < height && !found; i++) {
                    int temp = block[i][y];
                    if (temp == arr[curr+1]) {
                        if (i>x) {
                            for (long j = x+1; j < i; j++) {
                                int t = block[j][y];
                                if (t == 46) block[j][y] = '|';
                                else if (t == 45) block[j][y] = '+';
                            }
                        }
                        else if (i<x) {
                            for (long j = i+1; j < x; j++) {
                                int t = block[j][y];
                                if (t == 46) block[j][y] = '|';
                                else if (t == 45) block[j][y] = '+';
                            }
                        }
                        x = i;
                        found = true;
                    }
                }
            }
            if (!found) status = false;
            else curr++;
        }

        for (long i = 0; i < block.size(); i++) {
            for (long j = 0; j < block[i].size(); j++) {
                cout<<block[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
