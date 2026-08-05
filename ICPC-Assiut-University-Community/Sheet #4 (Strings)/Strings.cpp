// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    char firstCharofA = a[0];
    char firstCharofB = b[0];
    a[0]=firstCharofB;
    b[0]=firstCharofA;
    cout << a << " " << b << endl;

}