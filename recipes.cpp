#include <bits/stdc++.h>
using namespace std;

struct items {
string name;
double weight;
double percent;
};

int main() {
    int N; cin>>N;
    for (long g = 1; g <= N; g++) {
        int r,p,d; cin>>r>>p>>d;
        vector<items> ingredients;
        double scale = d/(double)p;
        double scaled_weight = 0;
        for (long i = 0; i < r; i++) {
            items x; cin>>x.name;
            cin>>x.weight;
            cin>>x.percent;
            if (x.percent == 100.0) {
                scaled_weight = scale*x.weight;
            }
            ingredients.push_back(x);
        }
        cout<<"Recipe # "<<g<<endl;
        for (long i = 0; i < r; i++) {
            double x = (ingredients[i].percent/(double)100)*scaled_weight;
            cout<<ingredients[i].name<<" ";
            cout<<fixed<<setprecision(1)<<x<<endl;
        }
        cout<<"----------------------------------------"<<endl;
    }
    return 0;
}
