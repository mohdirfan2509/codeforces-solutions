// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> umap;
    for (char x : s) {
        umap[tolower(x)]++;
    }

    string temp = "egypt";
    int ans = INT_MAX;
    for (char x : temp) {
        if (umap.count(x)) {
            ans = min(ans, umap[x]);
        }
    }
    cout << ans << endl;
}