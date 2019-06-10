#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr(120,0);
	for (long i = 0; i < 5; i++) {
		char a,b; cin>>a>>b;
		arr[a-'0']++;
	}
	sort(arr.begin(),arr.end(),greater<int>());
	cout<<arr[0];
}