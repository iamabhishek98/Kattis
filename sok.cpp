#include <bits/stdc++.h>
using namespace std;

int main() {
    double b_i,a_i,p_i; cin>>b_i>>a_i>>p_i;
    double b_r,a_r,p_r; cin>>b_r>>a_r>>p_r;
    double a = b_i/(double)b_r;
    double b = a_i/(double)a_r;
    double c = p_i/(double)p_r;
    if (a<=b && a<=c) cout<<fixed<<setprecision(15)<<0<<" "<<a_i-(b_i/(double)b_r*a_r)<<" "<<p_i-(b_i/(double)b_r*p_r);
    else if (b<=a && b<=c) cout<<fixed<<setprecision(15)<<b_i-(a_i/(double)a_r*b_r)<<" "<<0<<" "<<p_i-(a_i/(double)a_r*p_r);
    else cout<<fixed<<setprecision(15)<<b_i-(p_i/(double)p_r*b_r)<<" "<<a_i-(p_i/(double)p_r*a_r)<<" "<<0;
}
