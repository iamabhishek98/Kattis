#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x;cin>>x;
    vector<int> arr;
    for (long i = 0; i < x; i++) {
        int y;cin>>y;
        arr.push_back(y);
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for (long i = 0; i < x/3;i++)
        arr.pop_back();
    int total = 0;
    for (int i = 0; i < x; i++) {
        if (i%3==2) continue;
        total+=arr[i];
    }
    cout<<total;
    return 0;
}
