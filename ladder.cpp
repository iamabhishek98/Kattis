#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double h,v;
	cin>>h>>v;
	double x = sin(v*0.01745329252);
	cout<<ceil(h/x);
	return 0;
}
