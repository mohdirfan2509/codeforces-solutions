// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> pfxLs(n);
    vector<int> pfxRs(n);

    int totalLs = 0;
    int totalRs = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            totalLs++;
        } else {
            totalRs++;
        }
        pfxLs[i] = totalLs;
        pfxRs[i] = totalRs;
    }
    int count = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (pfxLs[i] == pfxRs[i]) {
            count++;
            ans.push_back(i);
        }
    }
    cout << count << endl;

    int idx = 0;
    for (int i = 0; i < n; i++) {
        cout << s[i];
        if (ans.size() > 0 && i == ans[idx]) {
            cout << endl;
            idx++;
        }
    }
}