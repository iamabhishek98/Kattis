#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    for (long i = 0; i < n; i += 1) {
        int num;
        cin>>num;
        vector<string> s(1001);
        vector<string> r(1001);
        vector<int> red(1001);
        vector<string> b(1001);
        vector<int> blue(1001);
        int count_red = 0;
        int count_blue = 0;
        int total = 0;
        for (long j = 0; j < num; j += 1) {
            cin>>s[j];
            if (s[j].back() == 'R') {
                r[count_red] = s[j];
                int len = r[count_red].size();
                r[count_red][len-1] = '\0';
                red[count_red] = stoi(r[count_red]);
                sort(red.begin(), red.end(), greater<int>());
                count_red += 1;
            }
            else {
                b[count_blue] = s[j];
                int len = b[count_blue].size();
                b[count_blue][len-1] = '\0';
                blue[count_blue] = stoi(b[count_blue]);
                sort(blue.begin(), blue.end(), greater<int>());
                count_blue += 1;
            }
        }
        if (count_red == 0 || count_blue == 0) {
            cout<<"Case #"<<i+1<<": "<<total<<endl;
            }
            else {
                int c = 0;
                while (count_red != 0 && count_blue != 0) {
                         total += (red[c] + blue[c] - 2);
                         count_blue -= 1;
                         count_red -= 1;
                         c += 1;
                }
              cout<<"Case #"<<i+1<<": "<<total<<endl;
            }
    }

    return 0;
}


