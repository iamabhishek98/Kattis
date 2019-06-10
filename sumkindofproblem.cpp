#include <bits/stdc++.h>
using namespace std;

int sop(int n) {
if (n==0) return 0;
return n+sop(n-1);
}

int soo(int n) {
int x = 1;
int total = 0;
while (n--) {
    total += x;
    x+=2;
}
return total;
}

int soe(int n) {
int x = 2;
int total = 0;
while (n--) {
    total += x;
    x+=2;
}
return total;
}

int main() {
    int g;
    cin>>g;
    while (g--) {
        int x; cin>>x;
        int n; cin>>n;
        cout<<x<<" "<<sop(n)<<" "<<soo(n)<<" "<<soe(n)<<endl;
    }
    system("pause");
    return 0;
}

