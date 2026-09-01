// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> words;

    stringstream ss(s);
    string token;
    while (getline(ss, token, '?')) {
        words.push_back(token);
    }

    string part = words[1];
    words.clear();
    token.clear();
    stringstream ss2(part);
    while (getline(ss2, token, '&')) {
        words.push_back(token);
    }

    for (string a : words) {
        string temp = a;

        for (char x : temp) {
            if (x == '=') {
                cout << ": ";
            } else {
                cout << x;
            }
        }
        cout << endl;
    }
}