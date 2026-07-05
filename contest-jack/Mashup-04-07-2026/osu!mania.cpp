#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n;
        cin >> n;
        vector<string> arr(n,"");
        for (int j = 0; j < n; j++) {
            string s;
            cin >> s;
            arr[j] = s;
        }
        vector<int> notePos(n);
        for (int j = 0; j < n; j++) {
            if (arr[j][0] == '#') {
                notePos[j] = 0 + 1;
            }
            if (arr[j][1] == '#') {
                notePos[j] = 1 + 1;
            }
            if (arr[j][2] == '#') {
                notePos[j] = 2 + 1;
            }
            if (arr[j][3] == '#') {
                notePos[j] = 3 + 1;
            }
        }
        for (int j = n - 1; j >= 0; j--) {
            cout << notePos[j] << " ";
        }
        cout << endl ;
    }
}