#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long in[n][7];
    for (long i = 0; i < n; i += 1) {
        for (long j = 0; j < 4; j += 1) {
            cin>>in[i][j];
        }
        //order of input
        in[i][4] = i;
        //rank
        in[i][5] = 0;
        //score
        in[i][6] = 0;
    }

    //sorting in descending order (number of problems solved)
    for(long i = 0; i < n; i += 1) {
        for(long j = i + 1; j < n; j += 1) {
            if(in[j][0] > in[i][0]) {
                swap(in[j][0], in[i][0]);
                swap(in[j][1], in[i][1]);
                swap(in[j][2], in[i][2]);
                swap(in[j][3], in[i][3]);
                swap(in[j][4], in[i][4]);
                swap(in[j][5], in[i][5]);
                swap(in[j][6], in[i][6]);
            }
            if (in[j][0] == in[i][0]) {
                //nested for loop to check time penalty
                if (in[j][1] < in[i][1]) {
                    swap(in[j][0], in[i][0]);
                    swap(in[j][1], in[i][1]);
                    swap(in[j][2], in[i][2]);
                    swap(in[j][3], in[i][3]);
                    swap(in[j][4], in[i][4]);
                    swap(in[j][5], in[i][5]);
                    swap(in[j][6], in[i][6]);
                }
                if (in[j][1] == in[i][1]) {
                    //nested for loop to check time submission
                    if (in[j][2] < in[i][2]) {
                        swap(in[j][0], in[i][0]);
                        swap(in[j][1], in[i][1]);
                        swap(in[j][2], in[i][2]);
                        swap(in[j][3], in[i][3]);
                        swap(in[j][4], in[i][4]);
                        swap(in[j][5], in[i][5]);
                        swap(in[j][6], in[i][6]);
                    }
                }
            }
        }
    }

    //ranking
    int rank = 1;
    int count = 1;
    in[0][5] = 1;
    for(long i = 1; i < n; i += 1) {
        if (in[i][0] < in[i-1][0]) {
            rank += count;
            in[i][5] = rank;
            count = 1;
        }
        else if (in[i][0] == in[i-1][0]) {
            if (in[i][1] > in[i-1][1]) {
                rank += count;
                in[i][5] = rank;
                count = 1;
            }
            else if (in[i][1] == in[i-1][1]) {
                if (in[i][2] > in[i-1][2]) {
                    rank += count;
                    in[i][5] = rank;
                    count = 1;
                }
                else if (in[i][2] == in[i-1][2]) {
                    in[i][5] = rank;
                    count += 1;
                }
            }
        }
    }

    //sort according to rank
    for(long i = 0; i < n; i += 1) {
        for(long j = i + 1; j < n; j += 1) {
          if(in[j][5] > in[i][5]) {
                swap(in[j][0], in[i][0]);
                swap(in[j][1], in[i][1]);
                swap(in[j][2], in[i][2]);
                swap(in[j][3], in[i][3]);
                swap(in[j][4], in[i][4]);
                swap(in[j][5], in[i][5]);
                swap(in[j][6], in[i][6]);
          }
        }
    }

    //calculate score
    for (long i = 0; i < n; i += 1) {
        if (in[i][5] == 1) {
            in[i][6] += 100;
        }
        else if (in[i][5] == 2) {
            in[i][6] += 75;
        }
        else if (in[i][5] == 3) {
            in[i][6] += 60;
        }
        else if (in[i][5] == 4) {
            in[i][6] += 50;
        }
        else if (in[i][5] == 5) {
            in[i][6] += 45;
        }
        else if (in[i][5] == 6) {
            in[i][6] += 40;
        }
        else if (in[i][5] == 7) {
            in[i][6] += 36;
        }
        else if (in[i][5] == 8) {
            in[i][6] += 32;
        }
        else if (in[i][5] == 9) {
            in[i][6] += 29;
        }
        else if (in[i][5] == 10) {
            in[i][6] += 26;
        }
        else if (in[i][5] == 11) {
            in[i][6] += 24;
        }
        else if (in[i][5] == 12) {
            in[i][6] += 22;
        }
        else if (in[i][5] == 13) {
            in[i][6] += 20;
        }
        else if (in[i][5] == 14) {
            in[i][6] += 18;
        }
        else if (in[i][5] == 15) {
            in[i][6] += 16;
        }
        else if (in[i][5] == 16) {
            in[i][6] += 15;
        }
        else if (in[i][5] == 17) {
            in[i][6] += 14;
        }
        else if (in[i][5] == 18) {
            in[i][6] += 13;
        }
        else if (in[i][5] == 19) {
            in[i][6] += 12;
        }
        else if (in[i][5] == 20) {
            in[i][6] += 11;
        }
        else if (in[i][5] == 21) {
            in[i][6] += 10;
        }
        else if (in[i][5] == 22) {
            in[i][6] += 9;
        }
        else if (in[i][5] == 23) {
            in[i][6] += 8;
        }
        else if (in[i][5] == 24) {
            in[i][6] += 7;
        }
        else if (in[i][5] == 25) {
            in[i][6] += 6;
        }
        else if (in[i][5] == 26) {
            in[i][6] += 5;
        }
        else if (in[i][5] == 27) {
            in[i][6] += 4;
        }
        else if (in[i][5] == 28) {
            in[i][6] += 3;
        }
        else if (in[i][5] == 29) {
            in[i][6] += 2;
        }
        else if (in[i][5] == 30) {
            in[i][6] += 1;
        }
        if (in[i][5] > 30) {
            in[i][6] += 0;
        }
    }

    //in case of score ties

    int temp = int[0][5];
    int count_tie = 0;
    long scores[1200] = {100,75,60,50,45,40,36,32,29,26,24,22,20,18,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    for (long i = 30; i < 1150; i += 1) {
        scores[i] = 0;
    }

    for (long i = 1; i < n; i += 1) {
        if (int[i][5] == temp) {
            count_tie += 1;
        }
        if (int[i][5] != temp && count_tie > 0) {
            int r = temp - 1;
            int total = 0;
            for (long j = 0; j < count_tie + 1; j += 1) {
                total += scores[r+j];
            }
            double average = ceil(total/(count_tie)
        }
    }

    for (long i = 0; i < n; i += 1) {
        if (in[i][3] == 1) {
            in[i][6] += 1;
        }
    }

    //sorting into order of input
    for(long i = 0; i < n; i += 1) {
        for(long j = i + 1; j < n; j += 1) {
            if(in[j][4] < in[i][4]) {
                swap(in[j][0], in[i][0]);
                swap(in[j][1], in[i][1]);
                swap(in[j][2], in[i][2]);
                swap(in[j][3], in[i][3]);
                swap(in[j][4], in[i][4]);
                swap(in[j][5], in[i][5]);
                swap(in[j][6], in[i][6]);
            }
        }
    }


    for (long i = 0; i < n; i += 1) {
            cout<<in[i][6]<<endl;
    }

    return 0;
}
