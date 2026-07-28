#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int m = s.size();
    int n = t.size();
    int p1 = m - 1;
    int p2 = n - 1;
    while (p1 >= 0 && p2 >= 0 && s[p1] == t[p2]) {
        p1--;
        p2--;
    }
    cout << p1+p2+2 << endl;
}