// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> ans;

    stringstream ss(s);
    string token;

    while (getline(ss, token, ' ')) {
        ans.push_back(token);
    }

    int n = ans.size();
    int count = n;
    for (int i = 0; i < n; i++) {
        string temp = ans[i];

        for (char x : temp) {
            if (x <= 65 || x >= 122) {
                count--;
                break;
            }
        }
    }
    cout << count << endl;
}