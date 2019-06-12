#include <bits/stdc++.h>
using namespace std;

int visiblestars(long i,long j,long rows, long cols,char **grid) {
	if (i<0 || i>=rows || j<0 || j>=cols || grid[i][j] != '#') return 0;
	grid[i][j] = 'x';
		 visiblestars(i+1,j,rows,cols,grid);
		 visiblestars(i-1,j,rows,cols,grid);
		 visiblestars(i,j-1,rows,cols,grid);
		 visiblestars(i,j+1,rows,cols,grid);
		 visiblestars(i+1,j+1,rows,cols,grid);
		 visiblestars(i-1,j-1,rows,cols,grid);
		 visiblestars(i+1,j-1,rows,cols,grid);
		 visiblestars(i-1,j+1,rows,cols,grid);
		 return 1;
}

int main() {
    int count = 0;
	long rows,cols;

	cin>>rows>>cols;

	    char **grid = new char*[rows];
		for (long i = 0; i < rows; i++) {
			grid[i] = new char[cols];
			for (long j = 0; j < cols; j++) {
				cin>>grid[i][j];
			}
		}
		int stars = 0;
		for (long i = 0; i < rows; i++) {
			for (long j = 0; j < cols; j++) {
				if (grid[i][j] == '#') {
					visiblestars(i,j,rows,cols,grid);
					stars++; 				}
			}
		}
	cout<<stars<<endl;

}


