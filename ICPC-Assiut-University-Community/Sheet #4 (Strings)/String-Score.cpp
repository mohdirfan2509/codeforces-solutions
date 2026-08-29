// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int score = 0;

    deque<char> dq(s.begin(), s.end());
    while (!dq.empty()) {
        char current = dq.front();
        dq.pop_front();
        if (current == 'V') {
            score += 5;
        } else if (current == 'W') {
            score += 2;
        } else if (current == 'X') {
            if (!dq.empty()) {
                dq.pop_front();
            }
        } else if (current == 'Y') {
            if (!dq.empty()) {
                char temp = dq.front();
                dq.pop_front();
                dq.push_back(temp);
            }
        } else if (current == 'Z') {
            if (!dq.empty()) {
                if (dq.front() == 'V') {
                    score /= 5;
                    dq.pop_front();
                } else if (dq.front() == 'W') {
                    score /= 2;
                    dq.pop_front();
                }
            }
        }
    }
    cout << score << endl;
}