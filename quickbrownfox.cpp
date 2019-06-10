#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
    int n; cin>>n;
    cin.ignore();
    while (n--) {
        string s; getline(cin,s);
        int arr[26];
        for (long i = 0; i < 26; i++) arr[i] = 0;
        for (long i = 0; i < s.size(); i++) {
            int x = tolower(s[i]);
            if (x>=97 && x<=122) arr[x-97] ++;
        }
        bool status = false;
        for (long i = 0; i < 26 && !status; i++) {
            if (arr[i] == 0) {
                status = true;
            }
        }
        if (!status) cout<<"pangram";
        else {
            cout<<"missing"<<" ";
            for (long i = 0; i < 26; i++) {
                if (arr[i] == 0) {
                    char c = 'a'+i;
                    cout<<c;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
