#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    //freopen("input.txt","r",stdin);
    int N; cin>>N;
    while (N--) {
        int n,t; cin>>n>>t;
        vector<int> buttons;
        for (long i = 0; i < n; i++) {
            int x; cin>>x; buttons.push_back(x);
        }
        //buttons.push_back(0);
        int count = 0; int extra = 0; int total = 0; int prev_total = 0;
        bool status = true; int r = 3;
        while (status) {
            int mine = 1e9; int temp = 0; count++;
            bool change = false;
            for (long i = 0; i < n; i++) {
                int x;
            x = max(0,buttons[i]);
            x = min(buttons[i],10000000);
                //cout<<x<<endl;
                if (abs((total+x) - t)<mine) {
                    change = true;
                    //cout<<mine<<" "<<abs((total + buttons[i]) - n)<<" "<<buttons[i]<<endl;
                    mine = abs((total + x) - t); temp = x;
                }
            }
            prev_total = total;
            total += temp;
           // cout<<temp<<" "<<prev_total<<" "<<total<<endl;
            if (total<t) continue;
            if (total == t) {
                cout<<count<<" "<<total-t<<endl;break;
            }
            else if (!change) {//((prev_total-t)<total-t) {
                cout<<count<<" "<<total-t<<endl;break;
            }
            else if (abs(prev_total-t)<abs(total-t) && prev_total>t && total>t) {
                cout<<count-1<<" "<<prev_total-t<<endl;break;
            }

        }
    }
}
*/
int main() {
    int N; cin>>N;

    while (N--) {
        int n,t;
        cin>>n>>t;
        vector<int> timing(3601,3601);
        vector<int> buttons;
        for (long i = 0; i < n; i++) {
            int x; cin>>x; buttons.push_back(x);
        }
        queue<int> curr;
        curr.push(0); timing[0] = 0;
        while (curr.size()) {
            int x = curr.front(); curr.pop();
            //x = max(0,x);
            //x = min(3600,x);
            for (long i = 0; i < buttons.size(); i++) {
                int y = x + buttons[i];
                y = max(0, y);
                y = min(3600, y);
                if (timing[y]>timing[x] + 1) {
                    timing[y] = timing[x]+1;curr.push(y);
                }
            }

        }
        for (long i = t; i < 3601; i++) {
            if (timing[i]<3601) {
                cout<<timing[i]<<" "<<i-t<<endl; break;
            }
        }
    }

}
