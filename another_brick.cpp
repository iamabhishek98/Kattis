#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int h,w,n; cin>>h>>w>>n;
    vector<int> bricks;
    for (long i = 0; i < n; i ++) {
        int x; cin>>x; bricks.push_back(x);
    }
    //reverse(bricks.begin(),bricks.end());
    int height = 0; int width = 0;
    bool status = true;
    int count = 0;
    while (count < bricks.size() && status) {

        while (w!=width) {
            width+=bricks[count];
            if (width>w) {
                status = false; break;
            }
            count++;
        }
        if (w==width && h==height) break;
        height++;
        width = 0;
    }
    if (status) cout<<"YES";
    else cout<<"NO";
    return 0;
}
