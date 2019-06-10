#include <bits/stdc++.h>
using namespace std;

long long fast(long long a, long long p, long long m) {
long long temp = 1;
while (p>0) {
    if ((p&1)==1) {
        temp = (temp*a)%m;
    }
    a = (a*a)%m;
    p/=2;
}
return temp%m;
}

bool isprime(long long n) {
    if (n<=1) return false;
    else if (n==2) return true;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n%i==0) return false;
    }
    return true;
}

bool pseudo(long long p,long long a) {
    if (!isprime(p) && fast(a,p,p)==a) return true;
    return false;
}

int main() {
    long long p,a;
    while (cin>>p>>a) {
     if (p==0 && a==0)break;
     if (pseudo(p,a)) cout<<"yes";
     else cout<<"no";
     cout<<endl;
    }
}

