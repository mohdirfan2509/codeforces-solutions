// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include <iostream>
using namespace std;

long long power(long long n, long long m) {
    long long ans = 1;
    for (long long i = 1; i <= m; i++) {
        ans = ans * n;
    }
    return ans;
}

int main() {
    long long x, n;
    cin >> x >> n;

    long long result = 0;
    for (long long i = 0; i <= n; i = i + 2) {
        if (i == 0) {
            result += power(x, i) - 1;
        } else {
            result += power(x, i);
        }
    }
    cout << result << endl;
}