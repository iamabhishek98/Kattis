#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char ad[101]; char br[101]; char go[101];
    for (long i = 0; i < 101; i++) {
        if (i%3==0) ad[i] = 'A';
        else if (i%3==1) ad[i] = 'B';
        else if (i%3==2) ad[i] = 'C';

        if (i%4==0) br[i] = 'B';
        else if (i%4==1) br[i] = 'A';
        else if (i%4==2) br[i] = 'B';
        else if (i%4==3) br[i] = 'C';

        if (i%6==0) go[i] = 'C';
        else if (i%6==1) go[i] = 'C';
        else if (i%6==2) go[i] = 'A';
        else if (i%6==3) go[i] = 'A';
        else if (i%6==4) go[i] = 'B';
        else if (i%6==5) go[i] = 'B';

    }
    int ad_c = 0;int br_c = 0;int go_c =0;
    string s; cin>>s;
    for (long i = 0; i < s.size(); i++) {
        if (s[i]==ad[i]) ad_c++;
        if (s[i]==br[i]) br_c++;
        if (s[i]==go[i]) go_c++;
    }
    int max = -1;
    if (ad_c>max) max = ad_c;
    if (br_c>max) max = br_c;
    if (go_c>max) max = go_c;
    cout<<max<<endl;
    if (ad_c==max) cout<<"Adrian"<<endl;
    if (br_c==max) cout<<"Bruno"<<endl;
    if (go_c==max) cout<<"Goran"<<endl;
}
