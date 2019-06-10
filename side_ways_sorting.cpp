#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
    int x,y;
    while (cin>>x>>y) {
        if (x==0 && y==0) break;
        vector<string> arr;
        arr.resize(y);
        for (int i = 0; i < x; i++) {
            for (long j = 0; j < y; j++) {
                char temp; cin>>temp;
            arr[j].push_back(temp);
            }
        }
        stable_sort(arr.begin(),arr.end(), [](string a, string b) {
                        for (auto &c : a)
                        c = tolower(c);
                        for (auto &c : b)
                        c = tolower(c);
                        return a<b;
                        });
        for (long i = 0; i < x; i++){
            for (long j = 0; j < y; j++) {
                cout<<arr[j][i];
            }
            cout<<endl;

        }
        cout<<endl;
    }
    return 0;
}
