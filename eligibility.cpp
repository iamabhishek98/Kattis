#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (long i = 0; i < n; i += 1) {
        string name,post,dob;
        int courses;
        cin>>name>>post>>dob>>courses;
        cout<<name<<" ";
        post.pop_back(); post.pop_back(); post.pop_back(); post.pop_back(); post.pop_back(); post.pop_back();
        int int_post = stoi(post);
        dob.pop_back();dob.pop_back();dob.pop_back();dob.pop_back();dob.pop_back();dob.pop_back();
        int int_dob = stoi(dob);
        if (int_post>=2010 || int_dob>=1991)
            cout<<"eligible"<<endl;
        else if (courses<=40)
            cout<<"coach petitions"<<endl;
        else
            cout<<"ineligible"<<endl;
    }
    return 0;
}
