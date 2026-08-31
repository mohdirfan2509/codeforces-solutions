#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n <= 2) {
            cout << n << endl;
            continue;
        }

        bool flag = true;
        for (int j = 1; j < n - 1; j++) {
            if (s[j - 1] == s[j + 1] && s[j] != s[j + 1]) {
                s.erase(j, 1);
                flag = false;
                break;
            }
        }
        if (flag == true && n >= 3) {
            s.erase(s.size() - 2, 1);
        }
        
        for(int j=0;j<s.size())
    }
}