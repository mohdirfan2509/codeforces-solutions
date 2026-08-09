// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        string s;
        cin >> s;
        if (s.size() <= 2) {
            cout << "Bad" << endl;
            break;
        }
        bool flag = true;
        for (int j = 2; j < s.size(); j++) {
            if (s[j-2]==s[j] && s[j-1]!=s[j]) {
                flag=false;
                cout << "Good" << endl;
                break;
            }
        }
        if(flag){
            cout << "Bad" << endl;
        }
    }
}