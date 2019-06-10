#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> cards;
    for (long i = 0; i < n; i += 1) {
        int x; cin>>x;
        cards.push_back(x);
    }
    int count = 1;
    int current = 0;
    int next = 0;
    while (count < cards.size()) {
          if ((cards[count] + cards[count-1])%2==0 ) {
           // cout<<cards[count]<<" "<<cards[count-1]<<endl;
            cards.erase(cards.begin()+(count-1));
            cards.erase(cards.begin()+(count-1));
            count = 1;
          }
        else {
        count += 1;
        }
    }
    cout<<cards.size()<<endl;
    return 0;
}
