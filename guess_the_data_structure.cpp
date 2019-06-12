#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main() {
    int n;
    while (cin>>n) {
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        int arr[n][2];
        bool st_s = true;
        bool st_q = true;
        bool st_pq = true;
        for (long i = 0; i < n; i += 1) {
        cin>>arr[i][0]>>arr[i][1];
        if (arr[i][0] == 1) {
            s.push(arr[i][1]);
            q.push(arr[i][1]);
            pq.push(arr[i][1]);
        }
        else if (arr[i][0] == 2) {
                if (q.size() == 0 || q.front() != arr[i][1] )
                    st_q = false;
                else q.pop();
                if (s.size() == 0 || s.top() != arr[i][1])
                    st_s = false;
                else s.pop();
                if (pq.size() == 0 || pq.top() != arr[i][1])
                    st_pq = false;
                else pq.pop();
        }
        }
        if (!st_s && !st_q && !st_pq)
            cout<<"impossible"<<endl;
        else if (st_q && st_s || st_q && st_pq || st_s && st_pq || st_q && st_s && st_pq)
            cout<<"not sure"<<endl;
        else if (st_q)
            cout<<"queue"<<endl;
        else if (st_s)
            cout<<"stack"<<endl;
        else if (st_pq)
            cout<<"priority queue"<<endl;
    }
    return 0;
}
