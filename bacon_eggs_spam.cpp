#include <bits/stdc++.h>
using namespace std;

struct items {
string item;
vector<string> names;
};

bool compare_name (string a,string b) {
return a<b;
}

bool compare_item (items &a, items &b) {
return a.item<b.item;
}

int main() {
    int n;
    while (cin>>n) {
        if (n == 0) break;
        vector<items> menu;
        for (long k = 0; k < n; k++) {
            string name; cin>>name;
            string s; getline(cin,s);
            stringstream in(s); //create a new buffer
            string token; //read from the new buffer
            while (getline(in,token,' ')) {//(name>>token) { (in the case of space)
                items x;
                bool exist = false;
                for (long j = 0; j < menu.size();j++) {
                    if (menu[j].item == token) {
                        exist = true;
                        menu[j].names.push_back(name);
                        break;
                    }
                }
                if (!exist) {
                    x.item = token;
                    x.names.push_back(name);
                    menu.push_back(x);
                }
            }
        }
        menu.erase(menu.begin());
        sort(menu.begin(),menu.end(),compare_item);
        for (long i = 0; i < menu.size(); i++) {
            cout<<menu[i].item<<" ";
            sort(menu[i].names.begin(),menu[i].names.end(),compare_name);
            for (long j = 0; j < menu[i].names.size(); j++) {
                cout<<menu[i].names[j]<<" ";
            }
            cout<<endl;
        }
    }
}
