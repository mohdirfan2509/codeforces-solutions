// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    string s;
    cin >> s;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    unordered_map<char, char> encrypt;
    unordered_map<char, char> decrypt;

    for (int i = 0; i < key.size(); i++) {
        encrypt[original[i]] = key[i];

        decrypt[key[i]] = original[i];
    }

    if (q == 1) {
        for (char x : s) {
            cout << encrypt[x];
        }
        cout << endl;
    } else {
        for (char x : s) {
            cout << decrypt[x];
        }
        cout << endl;
    }
}