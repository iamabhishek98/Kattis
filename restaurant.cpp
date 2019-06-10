#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin>>n) {
        if (n==0) break;
        int pone = 0;
        int ptwo = 0;
        while (n--) {
            string s; int num; cin>>s>>num;
        if (s=="DROP") {
            cout<<"DROP 2 "<<num<<endl;
            ptwo+=num;
        }
        else if (s=="TAKE") {

            if (pone<num && ptwo!=0 && pone>0) {
                int temp = pone;
                cout<<"TAKE 1 "<<pone<<endl;
                pone-=pone;
                cout<<"MOVE 2->1 "<<ptwo<<endl;
                pone+=ptwo;
                ptwo-=ptwo;
                cout<<"TAKE 1 "<<num-temp<<endl;
                pone-=(num-temp);
            }
            else if (pone==0 && ptwo>0) {
                cout<<"MOVE 2->1 "<<ptwo<<endl;
                pone += ptwo;
                ptwo -= ptwo;
                cout<<"TAKE 1 "<<num<<endl;
                pone-=num;
            }
            else {
                cout<<"TAKE 1 "<<num<<endl;
                pone-=num;
            }
        }
        }
        cout<<endl;
       }
}
