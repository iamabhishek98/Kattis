#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> num;
    for (long i = 0; i < 3; i++) {
        int x; cin>>x;
        num.push_back(x);
    }
    sort(num.begin(),num.end());
    int x = num[1]-num[0];
    int y = num[2]-num[1];
    if (x==y) cout<<num[0]-x;
    else if (x<y) cout<<num[1]+x;
    else cout<<num[0]+y;

}

