#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (long i = 0; i < n; i += 1) {
        int a,b;
        cin>>a>>b;
        vector<int> god;
        vector<int> mech(b);
        for (long j = 0; j < a; j += 1) {
            int x;cin>>x;
            god.push_back(x);
        }
        for (long j = 0; j < b; j += 1) {
            int x;cin>>x;
            mech.push_back(x);
        }
        while (god.size() > 0 && mech.size() > 0) {
            int min_a = *min_element(god.begin(), god.end());
            int a_loc = distance(god.begin(),min_element(god.begin(), god.end()));
            int min_b = *min_element(mech.begin(), mech.end());
            int b_loc = distance(mech.begin(),min_element(mech.begin(), mech.end()));

            if (min_a<min_b)
                god.erase(god.begin()+a_loc);
            else
                mech.erase(mech.begin()+b_loc);
        }
        if (god.size() != 0)
            cout<<"Godzilla"<<endl;
        else
            cout<<"MechaGodzilla"<<endl;
    }
    return 0;
}
