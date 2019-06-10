#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    vector<char> num;
    num.resize(11,'.');
    while (cin>>x) {
        if (x==0) break;
        string s,temp; cin>>temp>>s;
        if (s=="low") {
            for (long i = 0; i <= x; i++) {
                num[i] = 'x';
            }
        }
        else if (s == "high") {
            for (long i = x; i <= 10;i++) {
                num[i] = 'x';
            }
        }
        else if (s=="on") {
            if (num[x] != '.') cout<<"Stan is dishonest"<<endl;
            else cout<<"Stan may be honest"<<endl;
        num.clear();
        num.resize(11,'.');
        }
    }
    system("pause");
}
