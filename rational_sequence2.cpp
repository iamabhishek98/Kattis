// Rational Sequence 2

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); // standard

  int P; // 1 <= P <= 1000, number of test cases
  cin >> P; // just read

  while (P--) { // process per test case...
    // Each data set consists of a single line of input
    // It contains the data set number, K, a single space, the numerator, p, a forward slash (/, graaahhh) and the denominator, q
    int K, p, q;
    char dummy; // ANOTHER I/O tip for CS2040C class, use this to skip the '/' symbol, to be ignored
    cin >> K >> p >> dummy >> q; // yeah, done, I/O problem gone :)

    // PART 1: Find the pattern based on the given information:
    stack<int> sum;
    while (p!=q) {
    if (p>q) {
        p = p-q;
        sum.push(1);
    }
    else if (p<q) {
        q = q-p;
        sum.push(0);
    }
    }
    int n = 1;
    while (!sum.empty()) {
        if (sum.top() == 1) {
            n = n*2+1;
        }
        else if (sum.top() == 0) {
            n = 2*n;
        }
        sum.pop();
    }
    // For each data set there is a single line of output
    // It contains the data set number, K, followed by a single space which is then followed by the value of n for which F(n) is p/q
    // Inputs will be chosen so n will fit in a 32-bit integer.
    cout << K << " " << n << endl;
  }

  return 0;
}

