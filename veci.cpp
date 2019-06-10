#include <bits/stdc++.h>
using namespace std;

vector<long> split(long num) {
vector<long> tempe;
while (num>0) {
    tempe.push_back(num%10);
    num/=10;
}
return tempe;
}

int main() {
    long n;
    cin>>n;
    vector<long> number = split(n);
    sort(number.begin(),number.end());
    bool exist = false;
    for (long i = n+1; i <= 999999 && !exist;i++) {
        if (i>n*10) break;
        vector<long> temp = split(i);
        sort(temp.begin(),temp.end());
        if (temp.size() == number.size()) {
            bool status = false;
            for (long j = 0; j < temp.size() && !status; j++) {
                if (temp[j] != number[j]) status = true;
            }
            if (!status) {
                cout<<i; exist = true;
            }
        }
    }
    if (!exist) cout<<0;
}
