#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b; cin>>a>>b;
    srand(time(NULL));
    for (long i = 0; i < b; i++) {
        for (long j = 0; j < 10; j++) {
        cout<<(char)('a'+rand()%26);
        }
        cout<<" ";
    }
    return 0;
}

