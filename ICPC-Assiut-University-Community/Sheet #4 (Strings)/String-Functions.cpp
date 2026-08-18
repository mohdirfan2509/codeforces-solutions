// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for (int i = 0; i < q; i++) {
        string operation;
        cin >> operation;
        if (operation == "pop_back") {
            s.pop_back();

        } else if (operation == "front") {
            cout << s.front() << endl;

        } else if (operation == "back") {
            cout << s.back() << endl;

        } else if (operation == "sort") {
            int i;
            int j;
            cin >> i >> j;
            if (i > j) {
                swap(i, j);
            }
            sort(s.begin() + i - 1, s.begin() + j);
        } else if (operation == "reverse") {
            int i;
            int j;
            cin >> i >> j;
            if (i > j) {
                swap(i, j);
            }
            reverse(s.begin() + i - 1, s.begin() + j);
        } else if (operation == "print") {
            int i;
            cin >> i;
            cout << s[i - 1] << endl;
        } else if (operation == "substr") {
            int i;
            int j;
            cin >> i >> j;
            if (i > j) {
                swap(i, j);
            }
            cout << s.substr(i - 1, j - i + 1) << endl;
        } else if (operation == "push_back") {
            char i;
            cin >> i;
            s.push_back(i);
        }
    }
}