#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    while (N--) {
     int k, n;
     cin>>k>>n;
     stack<int> commands;
     while (n!=1) {
        if (n%2 == 0) {
            n/=2; commands.push(0);
        }
        else {
            n-=1;n/=2; commands.push(1);
        }
     }
     int p = 1; int q = 1;
     while (!commands.empty()) {
        if (commands.top() == 0) {
            q += p;
        }
        else {
            p += q;
        }
        commands.pop();
     }
     cout<<k<<" "<<p<<"/"<<q<<endl;
    }
    return 0;
}
