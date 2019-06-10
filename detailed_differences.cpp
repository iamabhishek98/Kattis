#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main() {
    int n; cin>>n;
    for (long i = 0; i < n; i ++) {
        string a,b; cin>>a>>b;
        cout<<a<<endl<<b<<endl;
        for (long i = 0; i < a.size(); i++) {
            if (a[i]==b[i]) cout<<".";
            else cout<<"*";
        }
        cout<<endl<<endl;
    }
    return 0;
}
