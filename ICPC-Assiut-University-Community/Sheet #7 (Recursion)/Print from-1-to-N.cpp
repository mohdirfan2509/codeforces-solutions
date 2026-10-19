// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

void printN(int start, int n) {
    if (start > n) {
        return;
    } else {
        cout << start << endl;
        printN(start + 1, n);
    }
}

int main() {
    int n;
    cin >> n;
    printN(1, n);
}