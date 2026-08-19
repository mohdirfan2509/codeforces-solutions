// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    string val = "hello";
    int p = 0;
    for (char x : s) {
        if (p <= 4 && x == val[p]) {
            p++;
        }
    }
    if (p == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}