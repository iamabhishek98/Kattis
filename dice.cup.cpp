#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y; cin>>x>>y;
    if (y<x) swap(x,y);
    for (long i = x+1; i <= y+1; i++) cout<<i<<endl;
}
