#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> left_swipe(vector<int> row) {
    vector<int> temp_row;
    for (long i = 0; i < 4; i ++) {
        if (row[i]!=0)
            temp_row.push_back(row[i]);
    }
    temp_row.push_back(0);
    for (long i = 0; i <(temp_row.size()); i++) {
        if (temp_row[i] == temp_row[i+1]) {
            temp_row[i]*=2;
            temp_row[i+1] = 0;

        }
    }
    long count = 0;
    vector<int> temp2;
    for (long i = 0;i<temp_row.size();i++) {
        if (temp_row[i]!=0) {
            temp2.push_back(temp_row[i]);
        }
        else {
            count++;
        }
    }
    for (long i = 0; i < count+(row.size()-temp_row.size()); i++) {
        temp2.push_back(0);
    }
    return temp2;
}

int main() {
    vector<vector<int>> grid(4);
    grid.resize(4);
    for (long i = 0; i < 4; i ++) {
        for (long j = 0; j < 4; j ++) {
            int x; cin>>x;
            grid[i].push_back(x);
        }
    }
    int command;cin>>command;

    //left swipe
    if (command == 0) {
        for (long i = 0; i < 4; i ++) {
            grid[i] = left_swipe(grid[i]);
        }
    }
    //right swipe
    else if (command == 2) {
        for (long i = 0; i < 4; i ++) {
            reverse(grid[i].begin(),grid[i].end());
            grid[i] = left_swipe(grid[i]);
            reverse(grid[i].begin(),grid[i].end());
        }
    }
    //up swipe
    else if (command == 1) {
        for (long i = 0; i < 4; i++ ) {
            vector<int> up(4);
            up[0] = grid[0][i];
            up[1] = grid[1][i];
            up[2] = grid[2][i];
            up[3] = grid[3][i];
            up = left_swipe(up);
            grid[0][i] = up[0];
            grid[1][i] = up[1];
            grid[2][i] = up[2];
            grid[3][i] = up[3];
        }
    }
    //down swipe
    else if (command == 3) {
        for (long i = 0; i < 4; i++ ) {
            vector<int> down(4);
            down[3] = grid[0][i];
            down[2] = grid[1][i];
            down[1] = grid[2][i];
            down[0] = grid[3][i];
            down = left_swipe(down);
            grid[0][i] = down[3];
            grid[1][i] = down[2];
            grid[2][i] = down[1];
            grid[3][i] = down[0];
        }
    }

    for (long i = 0; i < 4; i ++) {
        for (long j = 0; j < 4; j ++) {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}
