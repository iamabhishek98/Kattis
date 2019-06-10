#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    while (cin>>n>>m) {
        if (n==0&&m==0) break;
        int no = 1e9; int price = 1e9; double min = 1e9;
        for (long i = 0 ; i < n; i++) {
            int a,b; cin>>a>>b;
            if (a>m) continue;
            if (b/(double)a < min) {
                min = b/(double)a;
                no = a;
                price = b;
            }
            else if (b/(double)a == min && a>no) {
                no = a;
                price = b;
            }
        }
        if (no == 1e9) cout<<"No suitable tickets offered"<<endl;
        else cout<<"Buy "<<no<<" tickets for $"<<price<<endl;
    }
}
