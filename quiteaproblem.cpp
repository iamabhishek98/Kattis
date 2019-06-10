#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin,s)) {
            int i = 0;
            bool status = false;
            while (i+7<=s.size()) {
                status = false;
                string str = s.substr(i,7);
                for (long j = 0; j < 7; j++) str[j] = tolower(str[j]);
                string compare = "problem";
                if (str == compare) status = true;
                if (status) {
                    cout<<"yes"; break;
                }
                i++;
            }
            if (!status) cout<<"no";
            cout<<endl;
    }
}
