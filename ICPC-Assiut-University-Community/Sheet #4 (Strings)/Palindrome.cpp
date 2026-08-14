// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    string s1 = s;
    reverse(s.begin(), s.end());
    if (s1 == s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}