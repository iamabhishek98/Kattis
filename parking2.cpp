#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    while (N--) {
        int n; cin>>n;
        vector<int> park;
        int total = 0;
        for (long i = 0; i < n; i++) {
            int x; cin>>x; total+=x;
            park.push_back(x);
        }
        total = total/n;
        long min = 1e9;
        sort(park.begin(), park.end());
        for (long i = 0; i < n; i++) {
            if (abs(total-park[i]) < min) min = i;
        }
        cout<<(park[min]-park[0])*2+(park[n-1]-park[min])*2<<endl;
    }
    system("pause");
    return 0;
}
