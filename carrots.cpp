#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int carrots;
    cin>>carrots;
    vector<string> random(1000);
    for (long i = 0; i < 2; i += 1) {
        cin>>random[i];
    }
    cout<<carrots<<endl;
    system("pause");
    return 0;
}
