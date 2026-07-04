// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include <iostream>
using namespace std;

int main() {
    long long n, x;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    for (long long i = 0; i < n; i++) {
        if (arr[i] > 0) {
            cout << 1 << " ";
        } else if (arr[i] < 0) {
            cout << 2 << " ";
        }else{
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}