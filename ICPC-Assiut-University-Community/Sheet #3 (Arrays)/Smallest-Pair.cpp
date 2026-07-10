// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int k = 0; k < test_cases; k++) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                ans = min(ans, arr[i] + arr[j] + j - i );
            }
        }
        cout << ans << endl;
    }
}