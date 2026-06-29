// Question Link: https://codeforces.com/group/zOa9U7TcXb/contest/700735/problem/H
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int days = 0;
    int i = 1;
    while (i <= n) {
        days++;
        int last = arr[i];

        int j = i;
        while (j < last) {
            j++;
            last = max(last, arr[j]);
        }
        i = last + 1;
    }
    cout << days << endl;
}