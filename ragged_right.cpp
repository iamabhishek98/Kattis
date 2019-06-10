#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
    vector<string> para;
    string s;
    int max = 0;
    while (getline(cin,s)) {
        if (s.size()>max) max = s.size();
        para.push_back(s);
    }
    int ragged = 0;
    for (long i = 0; i < para.size()-1; i++) {
        int x = (max-para[i].size());
        ragged+=(x*x);
    }
    cout<<ragged<<endl;
    return 0;
}

