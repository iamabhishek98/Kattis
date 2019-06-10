#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[43];
    for (long i = 0; i < 43; i++) arr[i] = 0;
    for (long i = 0; i < 10; i++) {
        int x; cin>>x;
        arr[x%42]++;
    }
    int total = 0;
    for (long i = 0; i < 43; i++) {
        if (arr[i]>0) total++;
    }
    cout<<total;
}
