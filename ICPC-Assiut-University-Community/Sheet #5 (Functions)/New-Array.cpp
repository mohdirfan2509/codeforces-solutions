// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

void concatenateArrays(vector<int>& arrA, vector<int>& arrB) {
    int n = arrB.size();
    for (int i = 0; i < n; i++) {
        cout << arrB[i] << " ";
    }
    for (int i = 0; i < n; i++) {
        cout << arrA[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arrA(n);
    vector<int> arrB(n);
    for (int i = 0; i < n; i++) {
        cin >> arrA[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arrB[i];
    }
    concatenateArrays(arrA, arrB);
}