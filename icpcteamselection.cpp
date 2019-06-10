#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    int N; cin>>N;
    while (N--) {
        int n; cin>>n;
        deque<int> num;
        for (long i = 0 ; i < n*3; i++) {
            int x; cin>>x;
            num.push_back(x);
        }
        sort(num.begin(),num.end());
        int total = 0;
        for (long i = 0; i < n; i++) {
            num.pop_front(); num.pop_back();total+=num.back(); num.pop_back();
        }
        cout<<total<<endl;
    }
}*/

int main() {
    int N; cin>>N;
    while (N--) {
        int n; cin>>n;
        vector<int> num;
        for (long i = 0 ; i < n*3; i++) {
            int x; cin>>x;
            num.push_back(x);
        }
        sort(num.begin(),num.end());
        int total = 0;
        for (long i = n; i < n*3; i+=2) {
            total += num[i];
        }
        cout<<total<<endl;
    }
}
