#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); // I hope C++ users don't get accidental TLE due to missing this line
  int n, k; // 1 <= n <= 30 (number of students), 1 <= k <= 100 (number of commands from the teacher)
  cin >> n >> k; // just read
  int start = 0;
  stack<int> position;
  position.push(0);
  while (k--) { // now we throw the eggs around (or undo)
    int m;
    string cmd; // we do not really know what comes next, is it a command "undo m" or a single integer, we read as string first
    cin >> cmd;
    if (cmd == "undo") { // if we see a word "undo", then the format will be "undo m"
      cin >> m; // so we read m next
      for (long i = 0; i < m; i += 1) {
        position.pop();
      }
      start = position.top();
    }
    else { // this "cmd" is actually integer m :o
      m = stol(cmd); // there is a built-in command to convert string to integer
      start+=m;
     position.push(start);
    }
  }
  cout << (start+100000*n)%n << endl;
  return 0;
}

