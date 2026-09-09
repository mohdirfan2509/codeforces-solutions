// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

bool isOdd(int n) {
    return n % 2 == 1;
}

bool isPalindrome(int n) {
    string s1 = bitset<32>(n).to_string().substr(bitset<32>(n).to_string().find('1'));
    string s2 = s1;
    reverse(s1.begin(), s1.end());
    return s1 == s2;
}

int main() {
    int n;
    cin >> n;
    if (isOdd(n) && isPalindrome(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}