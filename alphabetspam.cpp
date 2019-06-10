#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

int main() {
    string s; cin>>s;
    vector<int> inp;
    double spc = 0; double lower = 0;
    double upper = 0; double sym = 0;
    for (long i = 0; i < s.size(); i++) {
        int x = s[i];
        inp.push_back(x);
    }
    for (long i = 0; i < inp.size(); i ++) {
        if (inp[i] == 95) spc++;
        else if (inp[i]>=65 && inp[i]<=90) upper++;
        else if (inp[i]>=97 && inp[i]<=122) lower++;
        else sym++;
    }
    cout<<fixed;
    cout.precision(16);
    cout<<(spc/(double)inp.size())<<endl<<(lower/(double)inp.size())<<endl;
    cout<<(upper/(double)inp.size())<<endl<<(sym/(double)inp.size())<<endl;
    return 0;
}
