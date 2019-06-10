#include <bits/stdc++.h>
using namespace std;

struct costume {
string cos;
int num = 0;
};

bool compare (costume &a, costume &b) {
    if (a.num!=b.num) return a.num<b.num;
    else return a.cos<b.cos;
}

int main() {
    int n; cin>>n;
    vector<costume> costumes;
    for (long I=0; I<n;I++) {
        string s; cin>>s;
        bool exist = false;
        for (long i = 0; i < costumes.size() && !exist;i++) {
            if (s==costumes[i].cos) {
                costumes[i].num++;
                exist = true;
            }
        }
        if (!exist) {
            costume x;
            x.cos = s;
            x.num++;
            costumes.push_back(x);
        }
    }
    sort(costumes.begin(),costumes.end(),compare);
    int min = costumes[0].num;
    int i = 0;
    while (costumes[i].num == min) {
        cout<<costumes[i].cos<<endl; i++;
    }
    system("pause");
    return 0;
}
