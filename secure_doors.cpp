#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> logs;
    int n;cin>>n;
    while (n--) {
        string a,name; cin>>a>>name;
        cout<<name;
        if (a=="entry") {
            cout<<" entered ";
            bool status = true;
            for (long i = 0; i < logs.size() && status;i++) {
                if (name==logs[i]) {
                    cout<<"(ANOMALY)"; status = false;
                }
            }
            if (status) logs.push_back(name);
        }
        else {
            cout<<" exited ";
            bool status = true;
            for (long i = 0; i < logs.size() && status;i++) {
                if (name==logs[i]) {
                    logs.erase(logs.begin()+i);
                    status = false;
                }
            }
            if (status) cout<<"(ANOMALY)";
        }
        cout<<endl;
    }
}
