#include <bits/stdc++.h>
using namespace std;

string digit(int n) {
    //cout<<"ok"<<endl;
    if (n==0) return "";
    else if (n==1) return "one";
    else if (n==2) return "two";
    else if (n==3) return "three";
    else if (n==4) return "four";
    else if (n==5) return "five";
    else if (n==6) return "six";
    else if (n==7) return "seven";
    else if (n==8) return "eight";
    else if (n==9) return "nine";
}

string teen(int n) {
    //cout<<"hello"<<endl;
    if (n<10) return digit(n%10);
    else if (n==10) return "ten";
    else if (n==11) return "eleven";
    else if (n==12) return "twelve";
    else if (n==13) return "thirteen";
    else if (n==14) return "fourteen";
    else if (n==15) return "fifteen";
    else if (n==16) return "sixteen";
    else if (n==17) return "seventeen";
    else if (n==18) return "eighteen";
    else if (n==19) return "nineteen";
    else if (n>=20 && n<=29) return ("twenty" + digit(n%10));
    else if (n>=30 && n<=39) return ("thirty" + digit(n%10));
    else if (n>=40 && n<=49) return ("forty" + digit(n%10));
    else if (n>=50 && n<=59) return ("fifty" + digit(n%10));
    else if (n>=60 && n<=69) return ("sixty" + digit(n%10));
    else if (n>=70 && n<=79) return ("seventy" + digit(n%10));
    else if (n>=80 && n<=89) return ("eighty" + digit(n%10));
    else if (n>=90 && n<=99) return ("ninety" + digit(n%10));
}

string hund(int n) {
    int x = n/100;
    if (x==1) return "onehundred" + teen(n-100);
    else if (x==2) return ("twohundred"+ teen(n-200));
    else if (x==3) return ("threehundred"+ teen(n-300));
    else if (x==4) return ("fourhundred"+ teen(n-400));
    else if (x==5) return ("fivehundred"+ teen(n-500));
    else if (x==6) return ("sixhundred"+ teen(n-600));
    else if (x==7) return ("sevenhundred"+ teen(n-700));
    else if (x==8) return ("eighthundred"+ teen(n-800));
    else if (x==9) return ("ninehundred"+ teen(n-900));
}

int main() {
    freopen("recinice.txt","r",stdin);
    int n;cin>>n;
    vector<string> sentence;
    int pos = 0; int letters = 0;
    for (long i = 0; i < n; i++) {
        string s; cin>>s;
        sentence.push_back(s);
        letters+=s.size();
    }
    bool status = false;
   // cout<<letters<<endl;
    for (long i = 1; i < 1000 && !status; i++) {
        string s = "";
        if (i>100) {
            s = hund(i);
        }
        else {
            s = teen(i);
        }
       // cout<<letters<<" "<<s.size()<<" "<<s<<endl;
        //cout<<i<<" "<<s<<endl;
        if (s.size()+letters-1 == i) {
            for (long j = 0; j < sentence.size(); j++) {
                if (sentence[j] == "$") cout<<s<<" ";
                else cout<<sentence[j]<<" ";
            }
            status = true;
        }
    }
}
