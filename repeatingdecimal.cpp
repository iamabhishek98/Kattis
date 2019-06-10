#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    while (cin>>a>>b>>c) {
       cout<<"0.";
       for (long i = 0; i < c; i++) {
        a*=10;
        cout<<a/b;
        a%=b;
       }
       cout<<endl;
    }
}
