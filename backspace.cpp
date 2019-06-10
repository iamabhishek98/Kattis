//backspace
//use a stack
//if == '<' then delete
//if using vector then everytime < then delete prev if vector.size() > 0
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <stack>
using namespace std;

int main() {
    string s;
    cin>>s;
    stack<char> text;
    for (long i = 0; i < s.length(); i ++) {
        if (s[i] == '<' && text.size() > 0) {
            //cout<<"delete "<<text.top()<<endl;
            text.pop();
        }
        else if (s[i] != '<') {
            //cout<<"add "<<s[i]<<endl;
            text.push(s[i]);
        }
    }
    //cout<<text.size()<<endl;
    int size = text.size();
    stack<char> output;
    for (long i = 0; i < size; i ++) {
        output.push(text.top());
        text.pop();
    }
    if (output.size()>0) {
    for (long i = 0; i < size; i ++) {
        cout<<output.top();
        output.pop();
    }
    }
    return 0;
}
