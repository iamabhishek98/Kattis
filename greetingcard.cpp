#include <bits/stdc++.h>
using namespace std;
/*
struct coor {
long x;
long y;
};

int main() {
    vector<coor> dots;
    int n; cin>>n;
    for (long i = 0; i < n; i++) {
        coor a; cin>>a.x>>a.y;
        dots.push_back(a);
    }
    int total = 0;
    for (long i = 0; i < n; i++) {
        for (long j = 0; j < n; j++) {
            if (i==j) continue;
            if (sqrt(pow((dots[i].x-dots[j].x),2) + pow((dots[i].y-dots[j].y),2))==2018) total++;
        }
    }
    cout<<total/2;
}
*/
typedef long long ll;

int main() {
    int n; cin>>n;
    set<pair<ll,ll>> dots;
    for (long i = 0; i < n; i++) {
        ll a,b; cin>>a>>b;
        dots.insert(make_pair(a,b));
    }
    ll count  = 0;
    for (auto i : dots) {
    ll a = i.first;
    ll b = i.second;
    if (dots.find({a+2018,b})!=dots.end()) count++;
    if (dots.find({a-2018,b})!=dots.end()) count++;
    if (dots.find({a,b+2018})!=dots.end()) count++;
    if (dots.find({a,b-2018})!=dots.end()) count++;

    if (dots.find({a+1680,b+1118})!=dots.end()) count++;
    if (dots.find({a-1680,b-1118})!=dots.end()) count++;
    if (dots.find({a+1118,b+1680})!=dots.end()) count++;
    if (dots.find({a-1118,b-1680})!=dots.end()) count++;

    if (dots.find({a+1680,b-1118})!=dots.end()) count++;
    if (dots.find({a-1680,b+1118})!=dots.end()) count++;
    if (dots.find({a+1118,b-1680})!=dots.end()) count++;
    if (dots.find({a-1118,b+1680})!=dots.end()) count++;
    }
    cout<<count/2;
}
