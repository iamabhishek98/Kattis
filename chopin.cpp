#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 1;
    string s, note;
    while (cin>>s>>note) {
        string arr[12][2];
        arr[0][0] = "A";
        arr[0][1] = "/";
        arr[1][0] = "A#";
        arr[1][1] = "Bb";
        arr[2][0] = "B";
        arr[2][1] = "/";
        arr[3][0] = "C";
        arr[3][1] = "/";
        arr[4][0] = "C#";
        arr[4][1] = "Db";
        arr[5][0] = "D";
        arr[5][1] = "/";
        arr[6][0] = "D#";
        arr[6][1] = "Eb";
        arr[7][0] = "E";
        arr[7][1] = "/";
        arr[8][0] = "F";
        arr[8][1] = "/";
        arr[9][0] = "F#";
        arr[9][1] = "Gb";
        arr[10][0] = "G";
        arr[10][1] = "/";
        arr[11][0] = "G#";
        arr[11][1] = "Ab";
        string output = "\0";
        for (long i = 0; i < 12; i++) {
            if (s==arr[i][0]) output = arr[i][1];
            else if (s==arr[i][1]) output = arr[i][0];
        }

        cout<<"Case "<<count<<": ";
        if (output == "/") cout<<"UNIQUE"<<endl;
        else cout<<output<<" "<<note<<endl;
        count ++;
    }
    return 0;
}
