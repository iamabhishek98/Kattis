#include <iostream>
using namespace std;

int main() {
	int arr[5][4];
	for (long i = 0; i < 5; i += 1) {
		for (long j = 0; j < 4; j += 1) {
			cin>>arr[i][j];
		}
	}
	int score = 0;
	int max_index = 0;
	int max_score = 0;
	for (long i = 0; i < 5; i += 1) {
		for (long j = 0; j < 4; j += 1) {
			score += arr[i][j];
		}
		if (score > max_score) {
			max_score = score;
			max_index = i;
		}
		score = 0;
	}
	cout<<max_index+1<<" "<<max_score<<endl;
 	return 0;
}
