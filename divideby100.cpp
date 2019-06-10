#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

// 1/100= 0.01

int main() {
//while (!cin.eof()) {
    string n,m;
    cin>>n>>m;
    while (n.front() == '0') {
        n.erase(n.begin());
    }
    if (m=="1")
        cout<<n<<endl;
    else if (n==m)
        cout<<1<<endl;
    else if (n.size()>=m.size()) {
        n.insert((n.size() - (m.size()-1)), ".");
        int pos;
        bool status = false;
        for (long i = 0; i < n.size(); i += 1) {
            if (n[i] == '.') {
                status = true;
                pos = i;
                break;
            }
        }
        if (pos == n.size()-1) {
        n.erase(n.size()-1);
        cout<<n<<endl;
        }
        else {
            int count = 0;
            while (n.back() == '0' && count < (n.size()-pos)) {
              n.erase(n.size()-1);
              count += 1;
            }
            if (n.back() == '.')
                n.erase(n.size()-1);
            cout<<n<<endl;

        }
    }
    else if (n.size() == (m.size()-1)) {
        n.insert(0,"0.");
        while (n.back() == '0') {
            n.erase(n.size()-1);
        }
        cout<<n<<endl;
    }
    else if (n.size() < (m.size()-1)) {
        cout<<"0.";
        int x = m.size()-2-(n.size()-1);
        for (long i = 0; i < x; i += 1) {
            cout<<"0";
        }
        while (n.back() == '0') {
            n.erase(n.size()-1);
        }
        cout<<n<<endl;
    }
//}
    return 0;
}
