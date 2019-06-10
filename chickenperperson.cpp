#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y; cin>>x>>y;
	if (x<y) {
		cout<<"Dr. Chaz will have "<<y-x;
		if (y-x!=1) cout<<" pieces of chicken left over!";
		else cout<<" piece of chicken left over!";
	}
	
	else {
		cout<<"Dr. Chaz needs "<<x-y;
		if (x-y!=1) cout<<" more pieces of chicken!";
		else cout<<" more piece of chicken!";
	}
}