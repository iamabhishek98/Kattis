#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
vector<int> arr;
for (long i = 0; i < 3; i++) {
    int x; cin>>x; arr.push_back(x);
}
sort(arr.begin(), arr.end());
int a = arr[0]; int b = arr[1]; int c = arr[2];
string s; cin>>s;
if (s[0] == 'A') cout<<a<<" ";
else if (s[0] == 'B') cout<<b<<" ";
else if (s[0] == 'C') cout<<c<<" ";

if (s[1] == 'A') cout<<a<<" ";
else if (s[1] == 'B') cout<<b<<" ";
else if (s[1] == 'C') cout<<c<<" ";

if (s[2] == 'A') cout<<a<<" ";
else if (s[2] == 'B') cout<<b<<" ";
else if (s[2] == 'C') cout<<c<<" ";

return 0;
}
