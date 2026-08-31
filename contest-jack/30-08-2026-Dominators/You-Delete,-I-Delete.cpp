#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '0') {
                s.erase(j, 1);
                break;
            }
        }

        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '1') {
                s.erase(j, 1);
                break;
            }
        }
        cout << s << endl;
    }
}