// Question Link: https://codeforces.com/problemset/problem/160/A
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    int myTotal = 0;
    for (int i = n - 1; i >= 0; i--) {
        myTotal+=arr[i];
        total-=arr[i];
        ans++;
        if(myTotal> total){
            cout << ans << endl;
            break;
        }
    }
}