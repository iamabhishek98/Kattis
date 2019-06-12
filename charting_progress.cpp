#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
while (!cin.eof()) {
    vector<string> block(101);
    int count = 0;
    while (!cin.eof()) {
        getline(cin, block[count]);
        if (block[count] == "") {
            break;
        }
        count += 1;
    }
    int cols = block[0].length();
    int rows = 0;
    while ((block[rows][0] == '*') || (block[rows][0] == '.')) {
        rows += 1;
    }
    int tot_log = 0;
    for (long i = 0; i < rows; i += 1) {
        int num_log = 0;
        int num_dot = 0;
        
        for (long j = 0; j < cols; j += 1) {
            if (block[i][j] == '*') {
                num_log += 1;
            }
            else if (block[i][j] == '.') {
                num_dot += 1;
            }
            if (j == (cols-1)) {
                 for (long k = 0; k < tot_log; k += 1) {
                    block[i][cols - 1 - k] = '.';
                 }
                for (long k = 0; k < num_log; k += 1) {
                    block[i][cols - 1 - tot_log - k] = '*';
                }
                for (long k = 0; k < (num_dot - tot_log); k += 1) {
                    block[i][k] = '.';
                }
                    tot_log += num_log;
            }
        }
    }
    for (long i = 0; i <rows; i += 1) {
    cout<<block[i]<<endl;
    }
    cout<<endl;
    }

    return 0;
}
