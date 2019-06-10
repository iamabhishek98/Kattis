#include <bits/stdc++.h>
using namespace std;

int main() {
    double r,pt,pc;
    while (cin>>r>>pt>>pc) {
        if (r==0&&pt==0&&pc==0) break;
        cout.precision(10);
        cout<<fixed<<pow(r,2)*M_PI<<" ";
        cout<<(pc/(double)pt)*pow(r*2,2)<<endl;
    }
}
