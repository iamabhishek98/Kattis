#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int count = 0;
    while (cin>>n) {
        count++;
        if (n==0) break;
        vector<string> names;
        names.resize(n);
        int pos = 0;
        int i = 0;
        while (i<n) {
            if ((n-i)>1) {
                string a,b;
                cin>>a>>b;
                names[pos] = a;
                names[n-pos-1] = b;
                i+=2;
            }
            else if ((n-i)==1) {
                string a;
                cin>>a;
                names[pos] = a;
                i++;
            }
            pos++;
        }
        cout<<"SET "<<count<<endl;
        for (long i =0; i < names.size(); i++) {
            cout<<names[i]<<endl;
        }
    }
}
