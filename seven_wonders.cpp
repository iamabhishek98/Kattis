#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int total_3 = 0;
    int total_2 = 0;
    int total_1 = 0;
    for (long i = 0; i < s.size(); i++) {
        if (s[i] == 'T') total_3++;
        else if (s[i] == 'C') total_2 ++;
        else if (s[i] == 'G') total_1 ++;
    }
    int sum = pow(total_3,2) + pow(total_2,2) + pow(total_1,2);
    while (total_3>0 && total_2>0 && total_1>0) {
        sum += 7;
        total_3--;total_2--;total_1--;
    }
    cout<<sum;
    return 0;
}
