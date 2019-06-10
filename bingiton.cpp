#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    map<string,int> input;
    for (long i = 0; i < n; i++) {
        string s; cin>>s;
        cout<<input[s]<<endl;
        for (long i = 1; i <= s.size();i++) {
            string x = s;
            input[x.substr(0,i)]++;
        }
    }
}
