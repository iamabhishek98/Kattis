#include <iostream>
#include <vector>
using namespace std;

int main() {
    int s, n;
    cin>>s>>n;
    vector<vector<int>> player;
    player.resize(n);
    for (long i = 0; i < n; i += 1) {
        player[i].push_back(i); //original position
        player[i].push_back(0); //status
    }
    int count = 0;
    while (player.size()>1) {
        count += ((s-1) % player.size());
        if (count >= player.size()) {
            count = count - player.size();
        }
        if (player[count][1] == 0) {
            player[count][1] = 1; //changing second hand to fist
            vector<int> x(2);
            x[0] = player[count][0];
            x[1] = 1;
            player.insert(player.begin()+count,x); //
        }
        else if (player[count][1] == 1) {
            player[count][1] = 2;//changing fist to palm
            count += 1;
        }
        else if (player[count][1] == 2) {
            player.erase(player.begin() + count);
        }
    }
    cout<<player[0][0]+1<<endl;
 return 0;
}
