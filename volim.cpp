#include <bits/stdc++.h>
using namespace std;

int main() {
    int player; cin>>player;
    int n; cin>>n;
    int time = 0;
    int status = -1;
    for (long i = 0; i < n; i++) {
        int x; cin>>x;
        char v; cin>>v;
        time += x;
        if (time >= 210) status = player;
        else if (v=='T') player++;
    }
    cout<<((status-1)%8)+1<<endl;
    system("pause");
    return 0;
}

