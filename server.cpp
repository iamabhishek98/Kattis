#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x; cin>>n>>x;
    bool status = false;
    int total = 0;
    int count = 0;
    for (long i = 0; i < n; i++) {
        int y; cin>>y;
        if (!status && total+y<=x) {
            total+=y;
            count ++;
        }
        else if (total+y>x) status = true;
    }
    cout<<count<<endl;
    system("pause");
}
