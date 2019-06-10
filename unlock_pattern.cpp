#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int grid[3][3];
    int ini_row = 0;
    int ini_col = 0;

    for (long i = 0; i < 3; i += 1) {
        for (long j = 0; j < 3; j += 1) {
            cin>>grid[i][j];
            if (grid[i][j] == 1) {
                ini_row = i;
                ini_col = j;
            }
        }
    }
    double total_len = 0;
    int count = 2;
    int curr_row = 0;
    int curr_col = 0;
    while (count < 10) {
        for (long i = 0; i < 3; i += 1) {
            for (long j = 0; j < 3; j += 1) {
                if (grid[i][j] == count) {
                    curr_row = i;
                    curr_col = j;
                    break;
                }
            }
        }
        total_len += sqrt((curr_row-ini_row)*(curr_row-ini_row) + (curr_col-ini_col)*(curr_col-ini_col));
        ini_row = curr_row;
        ini_col = curr_col;
        count += 1;
    }
    cout<<setprecision(10)<<total_len<<endl;
    system("pause");
    return 0;
}
