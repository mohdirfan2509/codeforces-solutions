// Question Link: https://codeforces.com/problemset/problem/1632/B
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        long long n;
        cin >> n;
        n--;
        long long msb = log2(n);
        vector<long long> ans;
        long long num = pow(2, msb) - 1;
        while (num >= 0) {
            ans.push_back(num);
            num--;
        }
        num = pow(2, msb);
        while (num <= n) {
            ans.push_back(num);
            num++;
        }
        for(auto it:ans){
            cout << it << " ";
        }
        cout << endl;
    }
}