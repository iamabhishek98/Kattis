#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("notamused.txt","r",stdin);
	string s; map<string,vector<double>> ppl;
	int count = 0;
	while (cin>>s) {
		if (s=="CLOSE") {
            count++; cout<<"DAY "<<count<<endl;
			for (auto &i : ppl) {
				double ans = 0;;
				for (long j = 1; j < i.second.size();j+=2) {
					ans+=(i.second[j]-i.second[j-1]);
				}
				cout<<i.first<<" $"<<fixed<<setprecision(2)<<ans*0.1<<endl;
			}
			cout<<endl;
			ppl.clear();
		}
		else if (s!="OPEN") {
			string name; int num; cin>>name>>num;
			ppl[name].push_back(num);
		}
	}
	system("pause");
}
