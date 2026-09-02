// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    string sub = "EGYPT";
    size_t pos = s.find(sub);

    while (pos != string::npos) {
        s.replace(pos, sub.length(), " ");
        pos = s.find(sub, pos + 1);
    }
    cout << s << endl;
}