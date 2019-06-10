#include <iostream>
//#include <vector>
//#include <string>
//#include <string.h>
#include <algorithm>
using namespace std;

int main() {
    long long a,b;
    while (cin>>a>>b) {
        cout<<abs(a-b)<<endl;
    }
    return 0;
}
/*
int main() {
    string e;
    while (cin>>e) {
    string a,b;
    a=e;
    cin>>b;
    if (a==b) cout<<0<<endl;
    else {
    if (b.size()>a.size())
        swap(a,b);
    else if (a.size()==b.size()) {
        bool status = true;
        for (long i = 0; i<a.size();i++) {
            if ((a[i]-'0')<(b[i]-'0')) {
                status = false;
            break;
            }
        }
        if (!status) swap(a,b);
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    char z = '0';
    int len = b.size();
    for (long i = 0; i <(a.size()-len);i++) {
      b.push_back('0');
    }
    string s;
    int count = 0;
    int carry = 0;
    while (count<a.size()) {
        int x = a[count]-'0';
        int y = b[count]-'0';
        if (carry == 1) x-=1;
        if (x<y) {
            carry=1;
            x+=10;
        }
        else carry=0;
        char z = (x-y) + '0';
        s.push_back(z);
        count++;
    }
    while (s.back()=='0' && s.size()>0) {
        s.pop_back();
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    }
    }
    return 0;
}*/
