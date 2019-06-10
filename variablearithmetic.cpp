#include <bits/stdc++.h>
using namespace std;

bool isnumber(const string& s)
{
    string::const_iterator it = s.begin();
    while (it != s.end() && isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main() {
	//freopen("variablearithmetic.txt","r",stdin);
	string s; map<string,int> para; set<string> param;
	while (getline(cin,s)) {
		if (s=="0") break;
		stringstream name(s);
		string token;
		vector<string> line;
		bool equal = false;
		while (name>>token) {
			if (token!="+"){
				if (token == "=") {
					equal = true;
					continue;
				}
				line.push_back(token);
			}
		}
		if (equal) {
			para[line[0]] = stoi(line[1]);
			param.insert(line[0]);
		}
		else {
			int i = 0; int ans = 0;
			while (i < line.size()) {
				if (isnumber(line[i])) {
					ans += stoi(line[i]);
				}
				else if (param.find(line[i]) != param.end()) {
					ans += para[line[i]];
					line[i] = "NOPE";
				}
				i++;
			}
			if (ans != 0) {
                cout<<ans;
                for (long j = 0; j < line.size(); j++) {
                    if (line[j] != "NOPE" && !isnumber(line[j])) {
                        cout<<" + "<<line[j];
                    }
                }
			}
			else {
                if (line[0] != "NOPE" && !isnumber(line[0])) cout<<line[0];
                for (long j = 1; j < line.size(); j++) {
                    if (line[j] != "NOPE" && !isnumber(line[j])) {
                        cout<<" + "<<line[j];
                    }
                }
			}
			cout<<endl;
		}
	}
}

