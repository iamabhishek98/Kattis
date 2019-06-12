#include <bits/stdc++.h>
using namespace std;
/*
struct names {
string name;
int num = 0;
};

bool compare(names &a, names &b) {
if (a.num==b.num) return a.name<b.name;
return a.num>b.num;
}


int main() {
    int N; cin>>N;
    while (N--) {
    int a; cin>>a;
    vector<names> n;
    for (long I = 0; I < a; I++) {
    names x;
    cin>>x.name>>x.num;
        bool exist = true;
        for (long i = 0; i < n.size() && exist; i++) {
            if (x.name== n[i].name) {
                n[i].num+=x.num;
                exist = false;
            }
        }
        if (exist) {
            n.push_back(x);
        }
    }

    sort(n.begin(),n.end(),compare);
    cout<<n.size()<<endl;
    for (long i = 0; i < n.size();i++) {
        cout<<n[i].name<<" "<<n[i].num<<endl;
    }
}
}
*/

struct names {
string s;
int num;
};

bool compare (names &a, names &b) {
    if (a.num == b.num) return a.s<b.s;
    return a.num>b.num;
}

int main() {
    int N; cin>>N;
    while (N--) {
        int n; cin>>n;
        map<string,int> toys;
        for (long i = 0; i < n; i++) {
            string s; int num; cin>>s>>num;
            toys[s]+=num;
        }
        vector<names> output;
        for (auto i : toys) {
            names x; x.s = i.first;
            x.num = i.second;
            output.push_back(x);
        }
        sort(output.begin(), output.end(), compare);
        cout<<output.size()<<endl;
        for (long i = 0; i < output.size(); i++) {
            cout<<output[i].s<<" "<<output[i].num<<endl;
        }
    }
}
