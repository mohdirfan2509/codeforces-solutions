// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

void printN(int n) {
    if (n <= 0) {
        return;
    } else {
        if (n == 1) {
            cout << n;
        } else {
            cout << n << " ";
        }
        printN(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    printN(n);
}