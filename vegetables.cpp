#include <bits/stdc++.h>
using namespace std;

struct boil {
int orig;
int cuts;
};

struct compare {
bool operator ()(boil &p1, boil &p2) {
        return ((p1.orig/(double)p1.cuts)<(p2.orig/(double)p2.cuts));
    }
};

int main() {
    double t; int n;
    cin>>t>>n;
    priority_queue<boil,vector<boil>,compare> vege;
    boil min;
    min.orig = 1e9;
    min.cuts = 1e9;
    for (long i = 0; i < n;i++) {
        boil x; cin>>x.orig;
        if (x.orig<min.orig) {
            min.orig = x.orig;
            min.cuts = 1;
        }
        x.cuts = 1;
        vege.push(x);
    }
    int cuts = 0;
    //cout<<vege.top().orig<<" "<<vege.top().cuts<<endl;
    while ((min.orig/(double)min.cuts)/(double)(vege.top().orig/(double)vege.top().cuts) <= t) {
            cuts++;
             //cout<<vege.top().orig<<" "<<vege.top().cuts<<" ";
            boil x = vege.top();
            vege.pop();
            x.cuts++;
            if ((x.orig/(double)x.cuts)<(min.orig/(double)min.cuts))
                min = x;
           // cout<<vege.top().orig<<" "<<vege.top().cuts<<" "<<min.orig<<" "<<min.cuts<<endl;
            vege.push(x);
    }
    cout<<cuts;
}
