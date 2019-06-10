#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    int count = 0;
    for (long i = 0; i < s.size(); i++) {
        if (i%3 == 0 && s[i]!='P') count++;
        else if (i%3 == 1 && s[i]!='E') count++;
        else if (i%3 == 2 && s[i]!='R') count++;
    }
    cout<<count<<endl;
    system("pause");
    return 0;
}
