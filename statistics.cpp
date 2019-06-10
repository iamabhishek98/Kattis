#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int count = 1;
    int n;
    while (cin>>n && !cin.eof()) {
        int maxV=-1e9;
        int minV=1e9;
        for (long i = 0; i < n; i += 1) {
            int x;
            cin>>x;
            maxV = max(x,maxV);
            minV = min(x,minV);
        }
        cout<<"Case "<<count<<": "<<minV<<" "<<maxV<<" "<<maxV-minV<<endl;
        count += 1;
    }
    return 0;
}
