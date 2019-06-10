
#include <iostream>
#include <string>
#include <vector>
using namespace std;
long  long ans = 0;
void merge(vector<int> &a , int l ,int mid , int r){
    vector<int> temp;
    int left = l, right =  mid +1;
    while(left <= mid && right <= r){
        if(a[left] <= a[right]){
            temp.push_back(a[left++]);
        }else{
            ans += (mid - left + 1);
            temp.push_back(a[right++]);
        }
    }
    while(left <= mid){
        temp.push_back(a[left++]);
    }
    while(right <= r){
        temp.push_back(a[right++]);
    }

    for(int i = l ; i <= r ; i ++){
        a[i] = temp[i-l];
    }
}
void mergesort(vector<int> &a, int l , int r){
    int  mid  = (l+r)/2;
    if(l < r){
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    }
    merge(a,l,mid,r);
}
int main(){
    int n, temp;
    vector<int> a;
    cin >> n;
    for(int i = 0 ;  i < n; i ++){
        cin >> temp;
        a.push_back(temp);
    }
    mergesort(a,0,n-1);
    cout << ans << endl;
    return 0;
}
