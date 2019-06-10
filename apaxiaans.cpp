#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
string s; cin>>s;
int count = 0;
while (count<(s.size()-1)) {
if (s[count]==s[count+1]) {
s.erase(s.begin()+count);
count = 0;
}
else count++;
}
cout<<s;
return 0;
}
