#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int n; cin>>n;
    stack<int> bin;
    long long count  = 0;
    while (n!=0) {
        if (n%2 != 0) bin.push(1);
        else bin.push(0);
        count ++;
        n/=2;
    }
    int output = 0;
    int c = 0;
    while (!bin.empty()) {
        output += bin.top()*pow(2,c);
        bin.pop();
        c++;
    }
    cout<<output;
}
