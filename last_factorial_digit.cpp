#include <iostream>
using namespace std;

int fact(int n) {
   if ((n==0)||(n==1))
      return 1;
   else
      return n*fact(n-1);
}

int main() {
    int n; cin>>n;
    for (long i = 0; i < n; i += 1) {
        int x; cin>>x;
        int y = fact(x)%10;
        cout<<y<<endl;
    }
    return 0;
}
