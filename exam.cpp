#include <bits/stdc++.h>
using namespace std;

int main() {
    int corr; cin>>corr;
    string a,b;  cin>>a>>b;
    int count = 0; int c = 0;
    for (long i = 0; i < a.size();i++) {
        if (a[i]==b[i]) count++;
        else c++;
    }
    int sw = a.size()-corr;
    int l = min(sw,c);
    sw-=l;count+=l;
    cout<<count-sw;
}
