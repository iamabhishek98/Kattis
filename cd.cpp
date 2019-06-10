// CD

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); // standard

  int N, M;
  while (cin >> N >> M, (N || M)) {
    // what data structure that you need to solve this problem?

//  priority_queue<int> jack; priority_queue<int> jill;
vector<int> jack; vector<int> jill; vector<int> intersection;


    int ans = 0; // compute this value
    for (int i = 0; i < N; ++i) {
      int id; cin >> id;
      // what will you do with Jack's CD
//      jack.push(id);
jack.push_back(id);

    }
//int count = 0; int counter = 0;
    for (int i = 0; i < M; ++i) {
      int id; cin >> id;
      jill.push_back(id);
  //   int j = count;
     //jill.push(id);
     /*while (j < N) {
        if (jack[j] == id) {
            ans++; count = j; break;
        }
        else j++;
     }*/


    }
   /* int i = 0; int j = 0;
   while (i < jack.size() && j < jill.size()) {
    if (jack[i]==jill[j]) {
        i++;j++;ans++;
       }
       else if (jack[i]<jill[j]) i++;
       else j++;
   }*/
   /* while (jack.size() > 0 && jill.size()>0) {
        if (jack.top()>jill.top()) {
            jack.pop();
        }
        else if (jack.top() < jill.top()) {
            jill.pop();
        }
        else {
            ans++;
            jack.pop();jill.pop();
        }
    }   */
set_intersection(jack.begin(),jack.end(),jill.begin(),jill.end(),back_inserter(intersection));
cout<<intersection.size()<<endl;
   // cout << ans << endl;
  }

  return 0;
}
