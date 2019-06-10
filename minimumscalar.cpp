#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    int X = 1;
    while (X <= N) {
        long n; cin>>n;
        vector<long> a;
        vector<long> b;
        for (long i = 0; i < n; i++) {
            long x; cin>>x; a.push_back(x);
        }
        for (long i = 0; i < n; i++) {
            long x; cin>>x; b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<long>());
        long count = 0;
            long total = 0;
            for (long i = 0; i < n; i++) {
                total += (a[i]*b[i]);
            }
        cout<<"Case #"<<X<<": "<<total<<endl;
        X++;
    }
}
