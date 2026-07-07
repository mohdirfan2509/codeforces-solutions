// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (long long i = n-1; i >= 0; i--) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}