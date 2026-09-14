// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

void nTimes(int n, char c) {
    for (int i = 1; i <= n; i++) {
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n;
        cin >> n;
        char c;
        cin >> c;
        nTimes(n, c);
    }
}