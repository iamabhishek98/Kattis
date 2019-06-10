#include <bits/stdc++.h>
using namespace std;

bool compare (const pair<string,int> &a, const pair<string,int> &b) {
    if (a.second==b.second) return a.first<b.first;
    return a.second>b.second;
}

int main() {
    string st;
    queue<map<string,int>> text;
    bool status = true;
    map<string,int> x;
    string temp_st;
    while (cin>>st) {
        if (st!="<text>" && st!="</text>" && st!="</top") {
            if (st.size()>=4) x[st]++;
        }
        if (st=="<text>") {
            continue;
        }
        else if (st=="</text>") {
            if (text.size()<7) {
                text.push(x);
            }
            else {
                text.pop();
                text.push(x);
            }
            x.clear();
        }
        else if (st=="<top") {
            long n; cin>>n; string ig; cin>>ig;
            map<string,int> y;
            queue<map<string,int>> temp_text = text;
            for (long i = 0; i < text.size(); i++) {
                map<string,int> temp = temp_text.front();
                for (auto j: temp) {
                    y[j.first] += j.second;
                }
                temp_text.pop();
            }
            vector<pair<string,int>> output;
            for (auto &i : y) {
                if (i.first != "<top") output.push_back(i);
            }
            cout<<"<top "<<n<<">"<<endl;
            int min_n = 0;
            if (output.size()<n) min_n = output.size();
            else min_n = n;
            int count = 0;
            sort(output.begin(),output.end(),compare);
            for (long i = 0; i < min_n-1; i++) {
            cout<<output[i].first<<" "<<output[i].second<<endl;
            }
            int k = min_n-1;
            while (output[min_n-1].second == output[k].second && k < output.size()) {
                cout<<output[k].first<<" "<<output[k].second<<endl;
                k++;
            }
            cout<<"</top>"<<endl;
        }
    }
}
