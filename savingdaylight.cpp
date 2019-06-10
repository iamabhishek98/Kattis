#include <bits/stdc++.h>
using namespace std;

void tokenize(string start, string end) {
    stringstream hour_s(start); //create a new buffer
    stringstream hour_e(end);
    string token; //read from the new buffer
    vector<string> start_time;
    vector<string> end_time;
    while (getline(hour_s,token,':')) {//(name>>token) { (in the case of space)
        start_time.push_back(token);
    }
    while (getline(hour_e,token,':')) {//(name>>token) { (in the case of space)
        end_time.push_back(token);
    }
    int start_h = stoi(start_time[0]);
    int start_m = stoi(start_time[1]);
    int end_h = stoi(end_time[0]);
    int end_m = stoi(end_time[1]);
    int hours = stoi(end_time[0])-stoi(start_time[0]);
    int mins = 0;
    if (end_m<start_m) {
        mins = end_m+(60-start_m);
        hours--;
    }
    else {
        mins = end_m-start_m;
    }
    cout<<hours<<" hours "<<mins<<" minutes"<<endl;
}

int main() {
    string month;
    while (cin>>month) {
        string day,year,time_s,time_e;
        cin>>day>>year>>time_s>>time_e;

        cout<<month<<" "<<day<<" "<<year<<" ";
        tokenize(time_s,time_e);
    }
    system("pause");
}

