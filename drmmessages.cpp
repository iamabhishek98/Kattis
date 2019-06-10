#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    char s1[s.size()/2];
    char s2[s.size()/2];
    for (long i = 0; i < s.size()/2; i++) {
        s1[i] = s[i];
    }
    for (long i = s.size()/2; i < s.size(); i++) {
        s2[i-s.size()/2] = s[i];
    }
    int r1 = 0; int r2 = 0;
    for (long i = 0; i < s.size()/2; i++) {
        int x = s1[i]-'A';
        r1+=x;
        int y = s2[i]-'A';
        r2+=y;
    }
    r1 = r1%26;
    r2 = r2%26;
    for (long i = 0; i < s.size()/2; i++) {
        int x = s1[i]-'A';
        int y = s2[i]-'A';
        x+=r1;y+=r2;
        if (x>=26) x-=26;
        if (y>=26) y-=26;
        s1[i] = x+'A';
        s2[i] = y+'A';
    }
    for (long i = 0; i < s.size()/2; i++) {
        int x = s2[i] - 'A';
        int y = s1[i] - 'A';
        y+=x;
        if (y>=26) y-=26;
        s1[i] = y+'A';
        cout<<s1[i];
    }
}
