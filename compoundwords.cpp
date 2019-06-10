#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    vector<string> input;
    string s;
    while (cin>>s) {
        input.push_back(s);
    }
    vector<string> output;
    for (long i = 0; i < input.size(); i++) {
        for (long j = 0; j < input.size(); j++) {
            if (i==j) continue;
            string temp = input[i]+input[j];
            output.push_back(temp);
        }
    }
    sort(output.begin(),output.end());
    int k = 1;
    while (k<output.size()) {
        if (output[k] == output[k-1]) {
            output.erase(output.begin()+k);
            k = 0;
        }
        else k++;
    }
    cout<<endl;
    for (long i = 0; i < output.size(); i++) {
        cout<<output[i]<<endl;
    }
}
*/
int main() {
    string s;
    vector<string> input;
    map<string,int> words;
    while (cin>>s) {
        input.push_back(s);
    }
    for (long i = 0; i < input.size(); i++) {
        for (long j = 0; j < input.size();j++) {
            if (i==j) continue;
            else {
                words[input[i]+input[j]]++;
            }
        }
    }
    for (auto i: words)
    cout<<i.first<<endl;
}
