#include <bits/stdc++.h>
using namespace std;

int main() {
	string com; map<string,int> defi; set<string> defin;
	while (cin>>com) {
		if (com=="clear") {
            defi.clear(); defin.clear();
		}
		else if (com=="def") {
			string s; int x; cin>>s>>x;
			defi[s] = x;
			defin.insert(s);
		}
		else if (com=="calc") {
			string s;
			getline(cin,s);
			for (long i = 1; i < s.size(); i++) cout<<s[i];
			stringstream name(s);
			string token;
			vector<string> toks;
			while (name>>token) toks.push_back(token);
			int ans = 0; string command;
			bool status = true;
			if (defin.find(toks[0])!=defin.end()) {
				ans = (defi[toks[0]]);
			}
			else {
                status = false;
			}
			for (long i = 1; i < toks.size()-1 && status;i++) {
                if (toks[i] == "+") command = "+";
				else if (toks[i] == "-") command = "-";
				else {
					if (defin.find(toks[i])!=defin.end()) {
						if (command == "+") ans += defi[toks[i]];
						else if (command == "-") ans -= defi[toks[i]];
					}
					else status = false;
				}
			}
			if (!status) cout<<" unknown"<<endl;
			else {
				bool exist = false;
				for (auto &i: defi) {
					if (i.second == ans) {
						cout<<" "<<i.first<<endl;
						exist = true;
						break;
					}
				}
				if (!exist) cout<<" unknown"<<endl;
			}
		}
	}
}
