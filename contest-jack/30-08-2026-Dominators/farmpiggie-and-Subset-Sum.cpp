#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n;
        cin >> n;
        for (int i = n; i >= 1; i--) {
            cout << i << " ";
        }
        cout << endl;
    }
}