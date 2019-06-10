#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> num;
    int total = 0;
    for (long i = 0; i < 9; i++) {
        int x; cin>>x;total+=x; num.push_back(x);
    }
    bool avoid = true;
    int x,y; x= 0; y = 0;
    for (long i = 0; i < 9 && avoid;i++) {
        for (long j = 0; j < 9 && avoid; j++) {
            if (i!=j && total-num[i]-num[j]==100) {
                x=i;y=j;avoid=false;
            }
        }
    }
    for (long i = 0; i < num.size();i++) {
        if (i!=x && i!=y) cout<<num[i]<<endl;
    }
}
