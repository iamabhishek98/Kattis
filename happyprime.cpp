#include <bits/stdc++.h>
using namespace std;

bool isprime(int n) {
    if (n==1) return false;
    else if (n==2) return true;
    for (long i = 2; i <= sqrt(n); i++) {
        if (n%i==0) return false;
    }
    return true;
}

int sod(int n) {
    if (n<10) return n*n;
    return pow((n%10),2)+sod(n/10);
}

bool happyprime(int n) {
    do {
        n = sod(n);
    } while (n!=89 && n != 1);
    if (n==1) return true;
    return false;
}

int main() {
    int N; cin>>N;
    int T = N;
    while (T--) {
        int n,x; cin>>n>>x;

        cout<<N-T<<" "<<x<<" ";
        if (isprime(x) && happyprime(x)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    system("pause");
    return 0;
}

