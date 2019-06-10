#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	//freopen("haypoints.txt", "r", stdin);
    int m,n; 
	while (cin>>m>>n) {
	map<string,ll> words; 
    while (m--) {
    	string s; ll x; cin>>s>>x;
    //	cout<<s<<" "<<x<<endl;
    	words[s] = x;
	}
	
	string t; ll ans = 0; int count = 0;
	while (cin>>t) {
	//	cout<<ans<<endl;
		if (t==".") {
			cout<<ans<<endl;
			ans = 0;
	//		count++;
	//		if (count==n) break;
		}
		else ans += words[t];
	}
}
}
