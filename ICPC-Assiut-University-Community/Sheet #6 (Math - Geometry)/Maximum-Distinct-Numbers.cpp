// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/E
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long count = 0;
    long long sum = 0;

    for (int i = 1; sum + i <= n; i++) {
        sum += i;
        count++;
    }
    cout << count << endl;
}