// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << abs(sum) << endl;
}