#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    while (N--) {
        string commands; cin>>commands;
        int n; cin>>n;
        char temp; cin>>temp;
        string integers; cin>>integers;
        integers.pop_back();
        stringstream num(integers); //create a new buffer
        string token; //read from the new buffer
        deque<int> intlist;
        while (getline(num,token,',')) {//(name>>token) { (in the case of space)
            intlist.push_back(stoi(token));
        }
        int pos = 0; bool error = false; bool rev = false;
        while (pos < commands.size() && !error) {
            if (commands[pos] == 'D' && intlist.size()==0) error = true;
            else if (commands[pos] == 'D') {
                if (rev) intlist.pop_back();
                else intlist.pop_front();
            }
            else if (commands[pos] == 'R') {
                rev = !rev;
            }
            pos++;
        }
        if (error) cout<<"error"<<endl;
        else {
            if (rev) reverse(intlist.begin(),intlist.end());
            cout<<"[";
            for (long i = 0; i < intlist.size(); i++) {
                cout<<intlist[i];
                if (i!=intlist.size()-1) cout<<",";
            }
            cout<<"]"<<endl;
        }
    }
}
